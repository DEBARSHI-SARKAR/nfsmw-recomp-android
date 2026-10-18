/* speed.exe 00681340 FUN_00681340; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00681340(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar1 == param_1) {
      return 0;
    }
    puVar2 = (uint *)puVar1[4];
    iVar4 = (int)puVar1[5] - (int)puVar2 >> 3;
    while (iVar3 = iVar4, 0 < iVar3) {
      iVar4 = iVar3 / 2;
      if (puVar2[iVar4 * 2] < param_2) {
        puVar2 = puVar2 + iVar4 * 2 + 2;
        iVar4 = iVar3 + (-1 - iVar4);
      }
    }
    if (((puVar2 != (uint *)puVar1[5]) && (*puVar2 == param_2)) && (puVar2[1] != 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar2[1];
}

