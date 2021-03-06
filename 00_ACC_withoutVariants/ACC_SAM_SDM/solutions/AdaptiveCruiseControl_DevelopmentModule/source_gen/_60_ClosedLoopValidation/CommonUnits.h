#ifndef COMMONUNITS_H
#define COMMONUNITS_H


#include <stdint.h>

#include <stddef.h>

#include <stdbool.h>



#ifdef __cplusplus
extern "C" {
#endif

#define COMMONUNITS_m_to_km_double(val)((val) / 1000)
#define COMMONUNITS_s_to_h_double(val)((val) / 3600)
#define COMMONUNITS_mps_to_kmph_double(val)((val) * 5 / 36)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
