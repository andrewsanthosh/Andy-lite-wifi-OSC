/*
 * initTfa9890.h
 *
 *  Created on: Dec 18, 2012
 *      Author: EL
 */

#ifndef INITTFA9890_H_
#define INITTFA9890_H_

#ifdef __cplusplus
extern "C" {
#endif

Tfa98xx_Error_t Tfa9890_specific(Tfa98xx_handle_t handle);
/*
 * Tfa9890_DspSystemStable will compensate for the wrong behavior of CLKS
 */
Tfa98xx_Error_t Tfa9890_DspSystemStable(Tfa98xx_handle_t handle, int *ready);
/*
 * Tfa9890_DspReset will deal with clock gating control in order
 * to reset the DSP for warm state restart
 */
Tfa98xx_Error_t Tfa9890_DspReset(Tfa98xx_handle_t handle, int state);

#ifdef __cplusplus
extern "C" }
#endif

#endif /* INITTFA9890_H_ */
