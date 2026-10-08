class RHD_FactionDefinition
{
	string m_sId;
	string m_sDisplayName;
	string m_sShortName;
	string m_sMinimumRecruitRank;

	int m_iStartingTreasury;

	bool m_bPlayerFaction;
	bool m_bAiFaction;

	void RHD_FactionDefinition()
	{
		m_iStartingTreasury = 0;
		m_sMinimumRecruitRank = "SERGEANT";
		m_bPlayerFaction = false;
		m_bAiFaction = true;
	}
}
