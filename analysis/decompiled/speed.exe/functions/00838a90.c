/* speed.exe 00838a90 FUN_00838a90; analysis pseudocode, not buildable source.
 * calls 00837bf0 FUN_00837bf0
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00837d10 FUN_00837d10
 * calls 00847b60 FUN_00847b60
 */

undefined4 FUN_00838a90(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint local_10;
  int *local_c;
  
  iVar6 = 0;
  local_10 = 0xffffffff;
  local_c = (int *)0x0;
  iVar3 = FUN_00837bf0(param_1,0xffffffff);
  if (0 < iVar3) {
    do {
      piVar7 = (int *)0x0;
      iVar4 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
      if (iVar4 != 0) {
        uVar5 = FUN_00847b60(*(undefined4 *)(param_1 + 8),iVar6);
        iVar4 = FUN_0083e3b0(uVar5);
        if ((iVar4 != 0) && (*(int **)(iVar4 + 0x100) != (int *)0x0)) {
          piVar7 = *(int **)(iVar4 + 0x100);
        }
      }
      uVar1 = *(uint *)(*piVar7 + 0xf8);
      if (((uVar1 >> 2 & 1) == 0) && ((uVar1 & 0x200) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((!bVar2 && (uVar1 & 0xc0000) == 0) && ((*(byte *)((int)piVar7 + 10) & 0x40) == 0)) &&
         (uVar1 = *(uint *)(*piVar7 + 0x104), uVar1 <= local_10)) {
        local_10 = uVar1;
        local_c = piVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
    if (local_c != (int *)0x0) {
      FUN_00837d10(param_1,*local_c,0x100000,0,0);
      return 0;
    }
  }
  return 0xfffffffb;
}

