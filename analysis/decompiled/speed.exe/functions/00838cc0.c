/* speed.exe 00838cc0 FUN_00838cc0; analysis pseudocode, not buildable source.
 * calls 00837bf0 FUN_00837bf0
 * calls 0083e3b0 FUN_0083e3b0
 * calls 0083e2f0 FUN_0083e2f0
 * calls 00847b60 FUN_00847b60
 * calls 00836d40 FUN_00836d40
 */

undefined4 FUN_00838cc0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  piVar8 = (int *)0x0;
  iVar6 = -1;
  local_c = 0xffffffff;
  uVar5 = 0xffffffff;
  local_10 = 0;
  local_8 = FUN_00837bf0(param_1,0xffffffff);
  if (local_8 < 1) {
    return 0xffffffff;
  }
  do {
    piVar7 = (int *)0x0;
    iVar3 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      uVar4 = FUN_00847b60(*(undefined4 *)(param_1 + 8),local_10);
      iVar3 = FUN_0083e3b0(uVar4);
      if ((iVar3 != 0) && (*(int **)(iVar3 + 0x100) != (int *)0x0)) {
        piVar7 = *(int **)(iVar3 + 0x100);
      }
    }
    if (param_2 == 0) {
LAB_00838d76:
      iVar3 = FUN_00836d40(piVar7,param_3,&local_c);
      if ((-1 < iVar3) && (local_c <= uVar5)) {
        uVar5 = local_c;
        iVar6 = iVar3;
        piVar8 = piVar7;
      }
    }
    else {
      uVar1 = *(uint *)(*piVar7 + 0xf8);
      local_4 = uVar1 >> 2 & 1;
      if ((local_4 == 0) && ((uVar1 & 0x200) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2 && (uVar1 & 0xc0000) == 0) goto LAB_00838d76;
    }
    local_10 = local_10 + 1;
    if (local_8 <= local_10) {
      if (piVar8 != (int *)0x0) {
        iVar3 = FUN_0083e3b0(piVar8[3],iVar6);
        if ((iVar3 != 0) && (piVar8[4] != 0)) {
          piVar7 = (int *)(piVar8[4] + 0x4c);
          *piVar7 = *piVar7 + -1;
        }
        iVar3 = piVar8[4];
        if ((-1 < iVar6) && (iVar6 = FUN_0083e2f0(piVar8[3],iVar6), iVar6 != 0)) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x14));
          (**(code **)(iVar3 + 4))(iVar6);
        }
        return 0;
      }
      return 0xffffffff;
    }
  } while( true );
}

