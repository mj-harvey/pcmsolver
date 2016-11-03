/* pcmsolver_copyright_start */
/*
 *     PCMSolver, an API for the Polarizable Continuum Model
 *     Copyright (C) 2013-2015 Roberto Di Remigio, Luca Frediani and contributors
 *
 *     This file is part of PCMSolver.
 *
 *     PCMSolver is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU Lesser General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     PCMSolver is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU Lesser General Public License for more details.
 *
 *     You should have received a copy of the GNU Lesser General Public License
 *     along with PCMSolver.  If not, see <http://www.gnu.org/licenses/>.
 *
 *     For information on the complete list of contributors to the
 *     PCMSolver API, see: <http://pcmsolver.github.io/pcmsolver-doc>
 */
/* pcmsolver_copyright_end */

#ifndef CONFIG_HPP
#define CONFIG_HPP

#define PROJECT_VERSION_MAJOR 1
#define PROJECT_VERSION_MINOR 1
#define PROJECT_VERSION_PATCH 4

#define PROJECT_VERSION 1.1.4
#define PCMSOLVER_VERSION ((PROJECT_VERSION_MAJOR << 16) | PROJECT_VERSION_MINOR | PROJECT_VERSION_PATCH)

/* #undef HAVE_OPENMP */

#ifdef __GNUC__
#define attribute(x) __attribute__((x))
#else
#define attribute(x)
#endif

#include <boost/current_function.hpp>

// Inspired from Eigen EIGEN_DEFAULT_DENSE_INDEX_TYPE
#ifndef PCMSOLVER_DEFAULT_INDEX_TYPE
#define PCMSOLVER_DEFAULT_INDEX_TYPE int
typedef PCMSOLVER_DEFAULT_INDEX_TYPE PCMSolverIndex;
#endif

#include "Cxx11Workarounds.hpp"
#include "ErrorHandling.hpp"
#include "LoggerInterface.hpp"
#include "PhysicalConstants.hpp"
#include "TimerInterface.hpp"

#endif // CONFIG_HPP
