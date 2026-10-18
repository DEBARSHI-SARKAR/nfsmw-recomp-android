/* speed.exe 004e44c0 FUN_004e44c0; analysis pseudocode, not buildable source.
 * calls 004e42a0 FUN_004e42a0
 */

int FUN_004e44c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004e42a0(param_1,*param_3,0);
  iVar2 = 0x7fff;
  if (param_4 != 0) {
    iVar2 = FUN_004e42a0(param_1,param_3[1],0);
  }
  return ((param_4 * -2 + 0x7fff) * iVar1 >> 0xf) + (param_4 * 2 * iVar2 >> 0xf);
}

