class RHD_PlayerState
{
	string m_sPlayerId;
	string m_sCharacterName;
	string m_sFactionId;
	string m_sRankId;

	int m_iCash;
	int m_iBank;
	int m_iReputation;

	void RHD_PlayerState()
	{
		m_iCash = 100;
		m_iBank = 0;
		m_iReputation = 0;
		m_sFactionId = "CIVILIAN";
		m_sRankId = "CIVILIAN";
	}
}
