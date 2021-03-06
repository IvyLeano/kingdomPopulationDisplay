/* W02
 * Kingdom.h
 * Ivy Leano
 */

#ifndef SICT_KINGDOM_H
#define SICT_KINGDOM_H

namespace sict 
{
	struct Kingdom 
	{
		char m_name[32];
		int m_population;
	};

	void display(Kingdom& kingdom);

	void display(Kingdom kingdoms[], int count);
}
#endif 