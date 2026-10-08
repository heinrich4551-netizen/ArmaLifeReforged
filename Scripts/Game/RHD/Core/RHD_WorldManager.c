[EntityEditorProps(category: "ArmaLife Reforged/Core", description: "Server-authoritative root for ArmaLife Reforged world state")]
class RHD_WorldManagerClass: ScriptComponentClass
{
}

class RHD_WorldManager: ScriptComponent
{
	protected ref RHD_WorldState m_WorldState;
	protected ref array<RHD_TerritoryDefinition> m_aTerritories;
	protected ref array<RHD_FactionDefinition> m_aFactions;

	void RHD_WorldManager()
	{
		m_WorldState = new RHD_WorldState();
		m_aTerritories = new array<RHD_TerritoryDefinition>();
		m_aFactions = new array<RHD_FactionDefinition>();
	}

	RHD_WorldState GetWorldState()
	{
		return m_WorldState;
	}

	array<RHD_TerritoryDefinition> GetTerritories()
	{
		return m_aTerritories;
	}

	array<RHD_FactionDefinition> GetFactions()
	{
		return m_aFactions;
	}

	void InitializeFoundation()
	{
		if (m_WorldState.m_bInitialized)
			return;

		RHD_FactionDefinition fia = new RHD_FactionDefinition();
		fia.m_sId = "FIA";
		fia.m_sDisplayName = "FIA";
		fia.m_sShortName = "FIA";
		fia.m_iStartingTreasury = 0;
		fia.m_iMinimumRecruitRank = 3;
		fia.m_bPlayerFaction = true;
		fia.m_bAiFaction = true;
		m_aFactions.Insert(fia);

		m_WorldState.m_bInitialized = true;
	}

	bool IsInitialized()
	{
		return m_WorldState && m_WorldState.m_bInitialized;
	}
}
