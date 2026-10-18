/* speed.exe 006805c0 FUN_006805c0; analysis pseudocode, not buildable source.
 * calls 00676bf0 FUN_00676bf0
 */

void FUN_006805c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (param_2 - param_1) / 0x18;
  if (1 < iVar1) {
    puVar2 = (undefined4 *)(param_2 + -0x18);
    if (iVar1 < 2) goto LAB_00680630;
    do {
      FUN_00676bf0(param_1,puVar2,puVar2,*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5],
                   param_3,0);
LAB_00680630:
      puVar2 = puVar2 + -6;
    } while (1 < ((0x18 - param_1) + (int)puVar2) / 0x18);
  }
  return;
}

