/* speed.exe 00757550 FUN_00757550; analysis pseudocode, not buildable source.
 * calls 00460af0 FUN_00460af0
 * calls 00753250 FUN_00753250
 * calls 00748700 FUN_00748700
 * calls 007485b0 FUN_007485b0
 * calls 007c94b0 __chkstk
 * calls 004646f0 FUN_004646f0
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_00757550(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_3404;
  int local_3400 [256];
  int local_3000 [3071];
  undefined4 uStack_4;
  
  uStack_4 = 0x75755a;
  iVar1 = FUN_004646f0(DAT_00904a00,local_3000,0xc00);
  uVar2 = FUN_00753250(*(undefined4 *)(param_1 + 0x348),local_3400,0);
  uVar2 = FUN_00748700(*(undefined4 *)(param_1 + 0x350),local_3400,uVar2);
  iVar3 = FUN_007485b0(*(undefined4 *)(param_1 + 0x34c),local_3400,uVar2);
  iVar7 = 0;
  local_3404 = 0;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = local_3400[iVar7];
      iVar4 = FUN_00460af0(iVar5);
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          if (iVar5 == local_3000[iVar6]) {
            local_3404 = local_3404 + iVar4;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      iVar7 = iVar7 + 1;
      iVar5 = local_3404;
    } while (iVar7 < iVar3);
  }
  return iVar5;
}

