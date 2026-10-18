/* speed.exe 00816888 FUN_00816888; analysis pseudocode, not buildable source.
 */

void FUN_00816888(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0xc;
  do {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    puVar1 = param_1 + 2;
    param_1 = (undefined4 *)((int)param_1 + param_3);
    param_2[2] = *puVar1;
    param_2 = (undefined4 *)((int)param_2 + param_4);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

