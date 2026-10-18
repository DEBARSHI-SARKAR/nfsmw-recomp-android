/* speed.exe 004af4b0 FUN_004af4b0; analysis pseudocode, not buildable source.
 * calls 004af470 FUN_004af470
 */

int FUN_004af4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_004af470(param_1,param_2,param_3,param_4);
  if ((iVar1 == -1) || ((&DAT_00912891)[iVar1 * 0x68] == '\0')) {
    iVar1 = -1;
  }
  return iVar1;
}

