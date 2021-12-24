#ifndef RUNGE_HEADER
#define RUNGE_HEADER

#include"global.h"
#include"math_utilities.h"

void time_evolve(   double spin, double deltat,
		    double tottime, int L,double hx,double hy,double hz, 
		    std::vector<double> &configx, 
		    std::vector<double> &configy, 
		    std::vector<double> &configz, 
		    std::vector< std::vector<int> > &neighbors, 
		    std::vector< std::vector<int> > &nneighbors, 
		    RMatrix &Jmat01, RMatrix &Jmat10,
		    RMatrix &Jmat02, RMatrix &Jmat20,
		    RMatrix &Jmat03, RMatrix &Jmat30,
		    RMatrix &Jmat12, RMatrix &Jmat21,
		    RMatrix &Jmat13, RMatrix &Jmat31,
		    RMatrix &Jmat23, RMatrix &Jmat32,
		    RMatrix &Jnmat01, RMatrix &Jnmat10,
		    RMatrix &Jnmat02, RMatrix &Jnmat20,
		    RMatrix &Jnmat03, RMatrix &Jnmat30,
		    RMatrix &Jnmat12, RMatrix &Jnmat21,
		    RMatrix &Jnmat13, RMatrix &Jnmat31,
		    RMatrix &Jnmat23, RMatrix &Jnmat32,
		    double &Jnnn, RMatrix &bond_disorder_matrix,
		    std::vector<RMatrix> &gmats, 
		    std::vector<RMatrix> &Rmats,
		    std::vector< std::vector<double> > &fullcoords,
		    std::vector< std::vector<int> >   & ijkt, 
		    std::vector<std::vector<double> > & qvals,
		    Matrix 			      & phases,
		    std::vector<double> 	      & omegas, 
		    STensor 			      & smunu);

#endif
