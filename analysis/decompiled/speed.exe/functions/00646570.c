/* speed.exe 00646570 FUN_00646570; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 006e8de0 FUN_006e8de0
 * calls 0045cd20 __break
 * calls 005d51f0 FUN_005d51f0
 * calls 00645a40 FUN_00645a40
 */

void __fastcall FUN_00646570(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7204;
  local_4 = 0;
  if (((param_1[5] != 0) &&
      (iVar4 = FUN_005d51f0(DAT_00920eac,DAT_00920eac + DAT_00920eb4 * 8,param_1[5]), iVar4 != 0))
     && (piVar1 = *(int **)(iVar4 + 4), piVar1 != (int *)0x0)) {
    iVar4 = param_1[2];
    iVar5 = FUN_005cc240(&DAT_008a7f28);
    if (iVar4 == iVar5) {
      iVar4 = param_1[6];
    }
    uVar2 = param_1[4];
    if (uVar2 < 0x669ec6bd) {
      if (uVar2 == 0x669ec6bc) {
        uVar6 = 1;
      }
      else if ((uVar2 == 0) || (uVar2 == 0x102abf91)) {
        uVar6 = 2;
      }
      else {
        if (uVar2 != 0x3c56741d) goto LAB_00646634;
        uVar6 = 3;
      }
    }
    else if (uVar2 == 0x936f462e) {
      uVar6 = 4;
    }
    else {
      if (uVar2 != 0xcc7f660a) {
LAB_00646634:
                    /* WARNING: Subroutine does not return */
        __break();
      }
      uVar6 = 0;
    }
    iVar5 = *piVar1;
    if (iVar4 == DAT_0091ddbc) {
      uVar3 = param_1[3];
      fVar7 = (float10)FUN_006e8de0(0,uVar6);
      (**(code **)(iVar5 + 0x34))(uVar3,(float)fVar7);
    }
    else {
      iVar4 = (**(code **)(iVar5 + 0x28))(iVar4);
      if (iVar4 != 0) {
        uVar3 = param_1[3];
        uVar8 = 0;
        fVar7 = (float10)FUN_006e8de0(0,uVar6);
        FUN_00645a40(uVar3,(float)fVar7,uVar8,uVar6);
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

