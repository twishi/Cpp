#pragma once 
#include <cstdlib> 
#include "Case.h" 
#include "GraphicPrimitives.h" 

class Damier
{ 
	public: 
		Damier(int rows, int columns): 
			rows_(rows), 
			columns_(columns),
			casesDamier_(new Case * [rows])
			{ 
				for (int i = 0; i < rows; i++)
			    	casesDamier_[i] = new Case[columns];

				for (int i = 0; i < rows_; i++)
				{ 
					for (int j = 0; j < columns_; j++)
					{ 
						casesDamier_[i][j] = new Case; 
					} 
				} 
			} 

		float posX_, posY_; 
		int rows_, columns_; 


		void draw(); 
		void tick();

};