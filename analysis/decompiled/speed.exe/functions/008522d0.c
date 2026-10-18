/* speed.exe 008522d0 FUN_008522d0; analysis pseudocode, not buildable source.
 * calls 00851c50 FUN_00851c50
 */

int FUN_008522d0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if ((*(int *)(param_1 + 0x7c) == 0) ||
     (iVar2 = *(int *)(param_1 + 0x74), *(int *)(param_1 + 0x78) != iVar2)) {
    if ((param_2 != (undefined4 *)0x0) ||
       ((param_3 != (undefined4 *)0x0 || (param_4 != (undefined4 *)0x0)))) {
      FUN_00851c50(param_1);
      if ((*(int *)(param_1 + 0x7c) != 0) &&
         (iVar2 = *(int *)(param_1 + 0x74), *(int *)(param_1 + 0x78) == iVar2)) goto LAB_0085231b;
    }
    iVar2 = -1;
  }
  else {
LAB_0085231b:
    puVar1 = *(undefined1 **)(param_1 + 0x7c);
    iVar2 = iVar2 + -0xc;
    puVar3 = puVar1 + 0xc;
    if (iVar2 < 1) {
      puVar3 = &DAT_00890978;
    }
    else {
      puVar3[iVar2] = 0;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = puVar3;
      return iVar2;
    }
  }
  return iVar2;
}

