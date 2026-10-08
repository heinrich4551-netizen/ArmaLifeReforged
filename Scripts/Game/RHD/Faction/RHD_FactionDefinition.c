class RHD_FactionDefinition
{
	string m_sId;
	string m_sDisplayName;
	string m_sShortName;

	int m_iStartingTreasury;
	int m_iMinimumRecruitRank;

	bool m_bPlayerFaction;
	bool m_bAiFaction;

	void RHD_FactionDefinition()
	{
		m_iStartingTreasury = 0;
		m_iMinimumRecruitRank = 3;
		m_bPlayerFaction = false;
		m_bAiFaction = true;
	}
}
