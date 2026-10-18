/* speed.exe 007d9fa0 __handle_qnan1; analysis pseudocode, not buildable source.
 * calls 007cb270 FUN_007cb270
 * calls 007dac10 __ctrlfp
 * calls 007daa50 __umatherr
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_qnan1
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

float10 __handle_qnan1(undefined4 param_1,double param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_00907390 == 0) {
    fVar2 = (float10)__umatherr(1,param_1,param_2,_DAT_008942e0,param_2,param_3);
  }
  else {
    puVar1 = (undefined4 *)FUN_007cb270();
    *puVar1 = 0x21;
    __ctrlfp();
    fVar2 = (float10)param_2;
  }
  return fVar2;
}

