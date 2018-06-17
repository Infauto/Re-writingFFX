
#include<iostream>
#include<string>

#include"Characters.h"
#include"Magie.h"

// class Characters

	Characters::Characters() : m_classe ("Personnage"), m_HPMax (150), m_ManaMax(50), m_vita (m_HPMax),
														m_mana (m_ManaMax), m_force (20), m_constitution (20),m_magie (10),
														m_esprit (10), m_precision (15),m_esquive (15), m_rapidite (15),
														m_chance (5), m_vitesse(10), m_niveau(1), m_size (sizeof(this)), m_ptr(NULL),
														 
														m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
														m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
														 
	{
		
	}

	Characters::Characters(Characters& original) : m_classe ("Personnage"), m_HPMax (150),m_ManaMax(50), m_vita (this->m_vita),
												   m_mana (this->m_mana), m_force (20), m_constitution (20),
												   m_magie (10), m_esprit (10), m_precision (15),m_esquive (15), m_rapidite (15),
												   m_chance (5), m_vitesse(10), m_niveau(original.getNiveau()), m_size (sizeof(this)),
												   m_ptr(NULL),
																								 
												   m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
												   m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
																								 
	{
		int i = 0;
		
		for(i;i<original.getSize(); i++)
		{
			this->m_ptr[i] = original.m_ptr[i];
		}
	}

	Characters::~Characters()
	{
		delete this->m_ptr;
	}

	Characters & Characters::operator = (const Characters & original)
	{
		int i = 0;
		delete this->m_ptr;
		for(i;i<original.getSize(); i++)
		{
			this->m_ptr[i] = original.m_ptr[i];
		}
	}

	int Characters::levelUp()
	{
		m_niveau ++;
		m_HPMax *= 1.05;
		m_ManaMax *= 1.02;
	}

	void Characters::presentation()const
	{
		std::cout<<"Je suis un personnage classique."<<std::endl;
	}

	int Characters::frapper()
	{
		//if (Arme)
		//	Personage::frapperArme()this->Arme;

	}

	int Characters::frapperArme(/*Arme courante*/)
	{
		// A faire lors de la création des armes
	}
	
	int Characters::receptionDegats(int dommages)
	{
		m_vita -= dommages;
		return m_vita;
	}
	
	// === get caracteristique ===

	std::string Characters::getClasse()const
	{
		return this->m_classe;
	}

	int Characters::getHPMax()const
	{
		return this->m_HPMax;
	}
	
	int Characters::getManaMax()const
	{
		return this->m_ManaMax;
	}

	int Characters::getVita()const
	{
		return this->m_vita;
	}

	int Characters::getMana()const
	{
		return this->m_mana;
	}

	int Characters::getForce()const
	{
		return this->m_force;
	}

	int Characters::getConstitution()const
	{
		return this->m_constitution;
	}

	int Characters::getMagie()const
	{
		return this->m_magie;
	}

	int Characters::getEsprit()const
	{
		return this->m_esprit;
	}

	int Characters::getPrecision()const
	{
		return this->m_precision;
	}

	int Characters::getEsquive()const
	{
		return this->m_esquive;
	}

	int Characters::getRapidite()const
	{
		return this->m_rapidite;
	}

	int Characters::getChance()const
	{
		return this->m_chance;
	}

	size_t Characters::getSize()const
	{
		return this->m_size;
	}

	int Characters::getNiveau()const
	{
		return this->m_niveau;
	}
	
	int * Characters::getTab()const
	{
		int * size;
		for(int i = 0; i<m_ptr[i]== NULL; i++)
			size ++;
		return size;
	}
	
	
	// === get MagieBlanche ===
	
	
	bool Characters::getBooster()const
	{
		return this->m_booster;
	}
	
	bool Characters::getAntiGlace()const
	{
		return this->m_antiGlace;
	}
	
	bool Characters::getAntiEau()const
	{
		return this->m_antiEau;
	}
	
	bool Characters::getAntiFeu()const
	{
		return this->m_antiFeu;
	}
	
	bool Characters::getAntiTonnerre()const
	{
		return this->m_antiTonnerre;
	}
	
	bool Characters::getScan()const
	{
		return this->m_scan;
	}
	
	bool Characters::getSomni()const
	{
		return this->m_somni;
	}
	
	bool Characters::getBlindage()const
	{
		return this->m_blindage;
	}
	
	bool Characters::getCarapace()const
	{
		return this->m_carapace;
	}
	
	bool Characters::getBoomerang()const
	{
		return this->m_boomerang;
	}
	
	bool Characters::getRecup()const
	{
		return this->m_recup;
	}
	
	
	// === set MagieBlanche ===
		
		
	bool Characters::setBooster(bool etat)
	{
		if (this->m_booster == false)
		{
			this->m_vitesse *= 2; 
			this->m_booster = true;
		}
		
		return this->m_booster;
	}
	
	bool Characters::setAntiGlace(bool etat)
	{
		if (this->m_antiGlace == false)
			this->m_antiGlace = true;
			
		// A completer lors de la creation des attaques elementaux et de la gestion des tours de jeux
		
		return this->m_antiGlace;
			
	}
	
	bool Characters::setAntiEau(bool etat)
	{
		if (this->m_antiEau == false)
			this->m_antiEau = true;
			
		// A completer lors de la creation des attaques elementaux et de la gestion des tours de jeux
		
		return this->m_antiEau;
	}
	
	bool Characters::setAntiFeu(bool etat)
	{
		if (this->m_antiFeu == false)
			this->m_antiFeu = true;
			
		// A completer lors de la creation des attaques elementaux et de la gestion des tours de jeux
		
		return this->m_antiFeu;
	}
	
	bool Characters::setAntiTonnerre(bool etat)
	{
		if (this->m_antiTonnerre == false)
			this->m_antiTonnerre = true;
			
		// A completer lors de la creation des attaques elementaux et de la gestion des tours de jeux
		
		return this->m_antiTonnerre;
	}
	
	bool Characters::setScan(bool etat)
	{
		if(this->m_scan == false)
			this->m_scan = true;
			
		return this->m_scan;
	}
	
	bool Characters::setSomni(bool etat)
	{
		if (this->m_somni == false)
		{
			this->m_vitesse /= 2;
			this->m_somni = true;
		}
		
		return this->m_somni;
	}
	
	bool Characters::setBlindage(bool etat)
	{
		if (this->m_blindage == false)
		{
			this->m_esprit *= 2;
			this->m_blindage = true;
		}
		return this->m_blindage;
	}
	
	bool Characters::setCarapace(bool etat)
	{
		if (this->m_carapace == false)
		{
			this->m_constitution *= 2;
			this->m_carapace = true;
		}
		
		return this->m_carapace;
	}
	
	bool Characters::setBoomerang(bool etat)
	{
		// A faire lors de la creation des mobs
	}
	
	bool Characters::setRecup(bool etat)
	{
		if (this->m_recup == false)
		{
			this->m_vita *= 1.1;
			if(this->m_vita > this->m_HPMax)
				this->m_vita = this->m_HPMax;
			this->m_recup = true;
		}
		return m_recup;
	}
	
	bool Characters::setEtatVivant(bool etat)
	{
		this->m_etatVivant = etat;
		 if(m_etatVivant == false)
		 	m_vita = 0;
		 	
		 return m_etatVivant;
	}
	
	
	// === set caracteristique ===
	
	
	std::string Characters::setClasse()
	{
		
	}

	int Characters::setHPMax()
	{
		
	}
	
	int Characters::setManaMax()
	{
	
	}

	template <typename Emetteur>
	int Characters::setVita(float boost)
	{
		if(boost < 0)
			if(m_vita -= boost > 0)
				m_vita -= boost;
				
		if(boost >= 0 && boost <= 2)
			if(m_vita *= boost > m_HPMax)
				m_vita = m_HPMax;
		
		if(boost > 2)
			if(m_vita += boost > m_HPMax)
				m_vita = m_HPMax;
		else
			return 0;
		
		return this->m_vita;
	}
	
	template <typename Emetteur>
	int Characters::setMana(Emetteur emetteur, float boost)
	{
		if(boost < 0 )
			if(m_mana -= boost >=0)
				this->m_mana -= boost;
			
			else
				return 1;
		
		if(boost > 0 && boost < 2)
			m_mana += 100 * ((boost * emetteur.getNiveau()) /20) -1 ;

		if(boost > 2)
		{
			this->m_mana += boost;
			if(this->m_mana > this->m_ManaMax)
				this->m_mana = this->m_ManaMax;
		}
			
		return this->m_mana;

	}

	template <typename Emetteur>
	int Characters::setForce(float boost)
	{
		if((m_force *= boost) >= 0 || (m_force *= boost) <= 255)
			m_force *= boost;
		else 
			return 1;
		return m_force;
	}

	template <typename Emetteur>
	int Characters::setConstitution(float boost)
	{
		m_constitution *= boost;
		return m_constitution;
	}

	template <typename Emetteur>
	int Characters::setMagie(float boost)
	{
	 	m_magie *= boost;
		return m_magie;
	}

	template <typename Emetteur>
	int Characters::setEsprit(float boost)
	{
		m_esprit *= boost;
		return m_esprit;
	}

	template <typename Emetteur>
	int Characters::setPrecision(float boost)
	{
		m_precision *= boost;
		return m_precision;
	}

	template <typename Emetteur>
	int Characters::setEsquive(float boost)
	{
		m_esquive *= boost;
		return m_esquive;
	}

	template <typename Emetteur>
	int Characters::setRapidite(float boost)
	{
		m_rapidite *= boost;
		return m_rapidite;
	}

	template <typename Emetteur>
	int Characters::setChance(float boost)
	{
		m_chance *= boost;
		return m_chance;
	}

	template <typename Emetteur>	
	int Characters::setVitesse(float boost)
	{
		m_vitesse *= boost;
		return m_vitesse;
	}

	int Characters::setNiveau()
	{
		int niveauSup = this->m_niveau * 1.25;
		if(niveauSup)
			this->m_niveau++;
			
		return this->m_niveau;
	}

	size_t Characters::setSize(Characters & original)
	{
		this->m_size = sizeof(original);
		return this->m_size;
	}

// class Guerrier

	Guerrier::Guerrier() : m_classe ("Guerrier"), m_HPMax (200), m_ManaMax(25),m_vita (m_HPMax), m_mana (m_ManaMax),
						   m_force (20), m_constitution (20), m_magie (10), m_esprit (10), m_precision (15),
						   m_esquive (15), m_rapidite (15), m_chance (5), m_vitesse(1), m_niveau(1),
						   m_size(sizeof(this)), m_ptr(NULL),
												 
						   m_bonus1(0), m_bonus2(0), m_malus1(0), m_malus2(0),
												 
						   m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
						   m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
	{
		
	}
	
	Guerrier::Guerrier(float bonus1, float bonus2, float malus1, float malus2) : m_classe ("Guerrier"), m_HPMax (200), m_ManaMax(25),m_vita (m_HPMax), m_mana (m_ManaMax),
						   														 m_force (20), m_constitution (20), m_magie (10), m_esprit (10), m_precision (15),
						   														 m_esquive (15), m_rapidite (15), m_chance (5), m_vitesse(1), m_niveau(1),
						   														 m_size(sizeof(this)), m_ptr(NULL),
												 
						   														 m_bonus1(1.5), m_bonus2(1.25), m_malus1(1.5), m_malus2(1.25),
												 
						   														 m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
						   														 m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
	{
		this->m_force *= this->m_bonus1;
		this->m_constitution *= this->m_bonus2;

		this->m_magie /= this->m_malus1;
		this->m_rapidite /= this->m_malus2;
	}

	Guerrier::Guerrier(Guerrier& original) : m_classe ("Guerrier"), m_HPMax (200),m_ManaMax(m_ManaMax), m_vita (m_HPMax), m_mana (25),
											 m_force (20), m_constitution (20), m_magie (10), m_esprit (10), m_precision (15),
											 m_esquive (15), m_rapidite (15), m_chance (5), m_vitesse(1), m_niveau(1),
											 m_size(sizeof(this)), m_ptr(NULL),
																	
											 m_bonus1(original.m_bonus1),m_bonus2(original.m_bonus2), m_malus1(original.m_malus1), m_malus2(original.m_malus2),
																	
											 m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
											 m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
	{
		
		int i = 0;
		
		for(i;i<original.getSize(); i++)
		{
			this->m_ptr[i] = original.m_ptr[i];
		}
	}

	Guerrier::~Guerrier()
	{
		delete this->m_ptr;
	}
	
	Guerrier & Guerrier::operator = (const Guerrier & original)
	{
		delete this->m_ptr;
	
		int i = 0;
		
		for(i;i<original.getSize(); i++)
		{
			this->m_ptr[i] = original.m_ptr[i];
		}
	}

	int Guerrier::levelUp()
	{
		m_HPMax *= 1.15;
	}

	void Guerrier::presentation()const
	{
		std::cout<<"Je suis un guerrier."<<std::endl;
	}

	float Guerrier::etatBerserk()
	{
		m_force *= 2;
	}


// Classe Mage 

	Mage::Mage() : m_classe ("Mage"), m_HPMax (200),m_ManaMax(m_ManaMax), m_vita (m_HPMax), m_mana (25),
				   m_force (20), m_constitution (20), m_magie (10), m_esprit (10), m_precision (15),
				   m_esquive (15), m_rapidite (15), m_chance (5), m_vitesse(1), m_niveau(1),
				   m_size(sizeof(this)), m_ptr(NULL),
																	
			 	   m_bonus1(0),m_bonus2(0), m_malus1(0), m_malus2(0),
																	
				   m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
				   m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
	{
		
	}
	

	Mage::Mage(std::string nom_classe) : m_classe (nom_classe), m_HPMax (200),m_ManaMax(m_ManaMax), m_vita (m_HPMax), m_mana (25),
										 m_force (20), m_constitution (20), m_magie (10), m_esprit (10), m_precision (15),
										 m_esquive (15), m_rapidite (15), m_chance (5), m_vitesse(1), m_niveau(1),
										 m_size(sizeof(this)), m_ptr(NULL),
																	
										 m_bonus1(0),m_bonus2(0), m_malus1(0), m_malus2(0),
																	
										 m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
										 m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
	{

	}
	
	Mage::Mage(float bonus1, float bonus2, float malus1, float malus2) : m_classe ("Mage"), m_HPMax (200),m_ManaMax(m_ManaMax), m_vita (m_HPMax), m_mana (25),
										 								 m_force (20), m_constitution (20), m_magie (10), m_esprit (10), m_precision (15),
										 								 m_esquive (15), m_rapidite (15), m_chance (5), m_vitesse(1), m_niveau(1),
										 								 m_size(sizeof(this)), m_ptr(NULL),
																	
										 								 m_bonus1(1.5), m_bonus2(1.25), m_malus1(1.5), m_malus2(1.25),
																	
										 								 m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
										 								 m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
	{
		this->m_magie *= this->m_bonus1;
		this->m_esprit *= this->m_bonus2;
		
		this->m_force /= this->m_malus1;
		this->m_constitution /= this->m_malus2;
	}
		
	Mage::Mage(Mage & original) : m_classe (original.m_classe), m_HPMax (200),m_ManaMax(m_ManaMax), m_vita (m_HPMax), m_mana (25),
								  m_force (20), m_constitution (20), m_magie (10), m_esprit (10), m_precision (15),
								  m_esquive (15), m_rapidite (15), m_chance (5), m_vitesse(1), m_niveau(1),
								  m_size(sizeof(this)), m_ptr(NULL),
																	
								  m_bonus1(original.m_bonus1),m_bonus2(original.m_bonus2), m_malus1(original.m_malus1), m_malus2(original.m_malus2),
																	
								  m_booster(false), m_antiGlace(false), m_antiEau(false), m_antiFeu(false), m_antiTonnerre(false),
								  m_scan(false), m_somni(false), m_blindage(false), m_carapace(false), m_boomerang(false), m_recup(false)
	{
		for(int i = 0; i<original.getSize(); i++)
			m_ptr[i] = original.m_ptr[i];
	}
	
	Mage::~Mage()
	{
		delete this->m_ptr;
	}

	Mage & Mage::operator = (const Mage & original)
	{
		delete this->m_ptr;
	
		for(int i = 0; i<original.getSize(); i++)
			m_ptr[i] = original.m_ptr[i];
	}
	
	int Mage::levelUp()
	{
		return m_niveau;
	}
	
	void Mage::presentation() const
	{
		
	}
