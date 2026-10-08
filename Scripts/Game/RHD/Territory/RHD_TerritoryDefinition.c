class RHD_TerritoryDefinition
{
	string m_sId;
	string m_sDisplayName;
	string m_sType;
	string m_sOwnerFactionId;

	float m_fInfluence;
	float m_fSecurity;
	float m_fEconomicValue;
	float m_fStrategicValue;

	bool m_bContested;
	bool m_bFortified;

	void RHD_TerritoryDefinition()
	{
		m_fInfluence = 0;
		m_fSecurity = 50;
		m_fEconomicValue = 0;
		m_fStrategicValue = 0;
		m_bContested = false;
		m_bFortified = false;
	}
}
