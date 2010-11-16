inline Register::Register() : m_available(false), m_busy(false)
{
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void Register::setName( const std::string& name )
{
	m_name = name;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline const std::string& Register::name() const
{
	return m_name;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void Register::setAvailable( bool available )
{
	m_available = available;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline bool Register::available() const
{
	return m_available;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void Register::setBusy( bool busy )
{
	m_busy = busy;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline bool Register::busy() const
{
	return m_busy;
}
