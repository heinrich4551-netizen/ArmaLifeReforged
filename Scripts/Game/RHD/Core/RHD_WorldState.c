class RHD_WorldState
{
	string m_sWorldId;
	string m_sMapName;
	string m_sPrimaryFaction;
	int m_iWorldVersion;
	bool m_bInitialized;

	void RHD_WorldState()
	{
		m_sWorldId = "ARMLIFE-EVERON-001";
		m_sMapName = "Everon";
		m_sPrimaryFaction = "FIA";
		m_iWorldVersion = 1;
		m_bInitialized = false;
	}
}
