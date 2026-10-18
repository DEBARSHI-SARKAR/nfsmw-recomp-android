/* speed.exe 007f1a6b FUN_007f1a6b; analysis pseudocode, not buildable source.
 * calls 007f19ab FUN_007f19ab
 * calls 007f20e2 FUN_007f20e2
 * calls 007f1f22 FUN_007f1f22
 * calls 007f2735 FUN_007f2735
 */

undefined4 FUN_007f1a6b(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = *(byte *)(param_1 + 0x24);
  if (bVar1 == 0x12) {
    iVar2 = FUN_007f19ab(0x46c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_007f1f22(param_2,param_1);
      goto LAB_007f1af5;
    }
  }
  else {
    if (bVar1 != 0x13) {
      if (bVar1 < 0x14) {
        return 1;
      }
      if (0x18 < bVar1) {
        return 1;
      }
      iVar2 = FUN_007f19ab(0x4a4);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_007f2735(param_2,param_1);
      }
      iVar2 = DAT_009bb418;
      DAT_009bb418 = DAT_009bb418 + 1;
      puVar3[3] = iVar2;
      goto LAB_007f1af5;
    }
    iVar2 = FUN_007f19ab(0x46c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_007f20e2(param_2,param_1);
      goto LAB_007f1af5;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_007f1af5:
  if ((((puVar3 != (undefined4 *)0x0) && (param_2 != -4)) &&
      (*(code **)(param_2 + 0xc) != (code *)0x0)) &&
     (iVar2 = (**(code **)(param_2 + 0xc))(puVar3,*(undefined4 *)(param_2 + 0x10),param_2),
     iVar2 == 0)) {
    (**(code **)*puVar3)(1);
  }
  return 1;
}

