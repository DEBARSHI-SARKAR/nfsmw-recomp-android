/* speed.exe 007ec875 FUN_007ec875; analysis pseudocode, not buildable source.
 * calls 007ec85e FUN_007ec85e
 * calls 007dcb40 __aulldiv
 * calls 007ec814 FUN_007ec814
 */

undefined8 FUN_007ec875(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_8;
  
  iVar5 = 0;
  local_8 = 0;
  uVar8 = FUN_007ec85e();
  uVar8 = __aulldiv(uVar8,5,0);
  uVar6 = 0;
  do {
    FUN_007ec814(1,0);
    uVar1 = rdtsc();
    FUN_007ec814(uVar8);
    uVar2 = rdtsc();
    uVar4 = (int)uVar2 - (int)uVar1;
    uVar7 = uVar6;
    uVar3 = local_8;
    if ((((iVar5 != 0) && (uVar7 = local_8, uVar3 = uVar4, local_8 <= uVar4)) && (local_8 != 0)) &&
       ((uVar4 < uVar6 || (uVar7 = uVar6, uVar3 = local_8, uVar6 == 0)))) {
      uVar7 = uVar4;
      uVar3 = local_8;
    }
    local_8 = uVar3;
    iVar5 = iVar5 + 1;
    uVar6 = uVar7;
  } while (iVar5 < 5);
  if (uVar7 == 0) {
    uVar7 = local_8;
  }
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),uVar7);
}

