
#ifndef CHARACTERS
#define CHARACTERS

class Characters
{
	public:
		Characters();
		Characters(Characters&);
		virtual ~Characters();
		
		virtual Characters & operator = (const Characters &);

		virtual int levelUp();
		virtual void presentation()const;
		

		int frapper();
		int frapperArme(/*Arme*/);
		
		int receptionDegats(int dommages);

		std::string getClasse()const;
		int getHPMax()const;
		int getManaMax()const;
		int getVita()const;
		int getMana()const;
		int getForce()const;
		int getConstitution()const;
		int getMagie()const;
		int getEsprit()const;
		int getPrecision()const;
		int getEsquive()const;
		int getRapidite()const;
		int getChance()const;
		size_t getSize()const;
		int getNiveau()const;
		int * getTab()const;

		bool getBooster()const;
		bool getAntiGlace()const;
		bool getAntiEau()const;
		bool getAntiFeu()const;
		bool getAntiTonnerre()const;
		bool getScan()const;
		bool getSomni()const;
		bool getBlindage()const;
		bool getCarapace()const;
		bool getBoomerang()const;
		bool getRecup()const;
		
		bool setBooster(bool);
		bool setAntiGlace(bool);
		bool setAntiEau(bool);
		bool setAntiFeu(bool);
		bool setAntiTonnerre(bool);
		bool setScan(bool);
		bool setSomni(bool);
		bool setBlindage(bool);
		bool setCarapace(bool);
		bool setBoomerang(bool);
		bool setRecup(bool);
		
		bool setEtatVivant(bool);
		
		std::string setClasse();
		int setHPMax();
		int setManaMax();
		
		template<typename Emetteur>
		int setVita(float);
		
		template<typename Emetteur>
		int setMana(Emetteur, float);
		
		template<typename Emetteur>
		int setForce(float);
		
		template<typename Emetteur>
		int setConstitution(float);
		
		template<typename Emetteur>
		int setMagie(float);
		
		template<typename Emetteur>
		int setEsprit(float);
		
		template<typename Emetteur>
		int setPrecision(float);
		
		template<typename Emetteur>
		int setEsquive(float);
		
		template<typename Emetteur>
		int setRapidite(float);
		
		template<typename Emetteur>
		int setChance(float);
		
		template<typename Emetteur>
		int setVitesse(float);
		
		int setNiveau();
		size_t setSize(Characters &);


	private:
		std::string m_classe;
		int m_HPMax;
		int m_ManaMax;
		int m_vita;
		int m_mana;
		int m_force;
		int m_constitution;
		int m_magie;
		int m_esprit;
		int m_precision;
		int m_esquive;
		int m_rapidite;
		int m_chance;
		int m_vitesse;
		int m_niveau;
		size_t m_size;
		
		int * m_ptr;
		bool m_etatVivant;
		
		bool m_booster;
		bool m_antiGlace;
		bool m_antiEau;
		bool m_antiFeu;
		bool m_antiTonnerre;
		bool m_scan;
		bool m_somni;
		bool m_blindage;
		bool m_carapace;
		bool m_boomerang;
		bool m_recup;

};

class Guerrier : public Characters
{
	public:

		Guerrier();
		Guerrier(float, float, float, float);
		Guerrier(Guerrier&);
		~Guerrier();
		
		Guerrier & operator = (const Guerrier &);

		int levelUp();
		void presentation()const;
		
		float etatBerserk();
		


	private:
		std::string m_classe;
		int m_HPMax;
		int m_ManaMax;
		int m_vita;
		int m_mana;
		int m_force;
		int m_constitution;
		int m_magie;
		int m_esprit;
		int m_precision;
		int m_esquive;
		int m_rapidite;
		int m_chance;
		int m_vitesse;
		int m_niveau;
		size_t m_size;
		
		int * m_ptr;
		
		float m_bonus1;
		float m_bonus2;
		float m_malus1;
		float m_malus2;
		
		bool m_booster;
		bool m_antiGlace;
		bool m_antiEau;
		bool m_antiFeu;
		bool m_antiTonnerre;
		bool m_scan;
		bool m_somni;
		bool m_blindage;
		bool m_carapace;
		bool m_boomerang;
		bool m_recup;
		
};

class Mage : public Characters
{
	public: 
		Mage();
		Mage(std::string nom_classe);
		Mage(float, float, float, float);
		Mage(Mage&);
		~Mage();

		Mage & operator = (const Mage &);

		int levelUp();
		void presentation()const;

	private:
 		std::string m_classe;
		int m_HPMax;
		int m_ManaMax;
		int m_vita;
		int m_mana;
		int m_force;
		int m_constitution;
		int m_magie;
		int m_esprit;
		int m_precision;
		int m_esquive;
		int m_rapidite;
		int m_chance;
		int m_vitesse;
		int m_niveau;
		size_t m_size;
		
		int * m_ptr;
		
		float m_bonus1;
		float m_bonus2;
		float m_malus1;
		float m_malus2;
		
		bool m_booster;
		bool m_antiGlace;
		bool m_antiEau;
		bool m_antiFeu;
		bool m_antiTonnerre;
		bool m_scan;
		bool m_somni;
		bool m_blindage;
		bool m_carapace;
		bool m_boomerang;
		bool m_recup;
		
};

#endif
