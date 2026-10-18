/* speed.exe 00611850 FUN_00611850; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 * calls 005d51f0 FUN_005d51f0
 * calls 00627400 FUN_00627400
 * calls 00611440 FUN_00611440
 * calls 005fde80 FUN_005fde80
 * calls 005dc260 FUN_005dc260
 * calls 005fc6e0 FUN_005fc6e0
 * calls 0060dae0 FUN_0060dae0
 * calls 006225d0 FUN_006225d0
 * calls 005dbed0 FUN_005dbed0
 * calls 00602200 FUN_00602200
 * calls 005facd0 FUN_005facd0
 * calls 005dbef0 FUN_005dbef0
 * calls 005ddec0 FUN_005ddec0
 */

void FUN_00611850(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008766cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0060dae0(param_1);
  iVar2 = FUN_005dbed0(iVar1 + -1);
  fVar8 = (float10)FUN_005ddec0();
  FUN_005dc260(*(undefined4 *)(iVar2 + 0x28),iVar1 + -1,(float)fVar8);
  FUN_00602200(param_2 + 1);
  FUN_005fde80();
  if (((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) &&
     (iVar1 = FUN_005faa20(), iVar1 == 3)) {
    iVar1 = FUN_005fc6e0();
    iVar2 = FUN_005facd0();
    iVar6 = 0;
    iVar7 = 0;
    iVar3 = FUN_005dbef0();
    if (0 < iVar3) {
      do {
        iVar3 = FUN_005dbed0(iVar7);
        if (param_2 <= *(int *)(iVar3 + 0x28)) {
          iVar6 = iVar6 + 1;
        }
        iVar7 = iVar7 + 1;
        iVar3 = FUN_005dbef0();
      } while (iVar7 < iVar3);
    }
    if (iVar6 == iVar2 + (1 - iVar1 * param_2)) {
      iVar2 = 0;
      iVar1 = FUN_005dbef0();
      if (0 < iVar1) {
        do {
          piVar4 = (int *)FUN_005dbed0(iVar2);
          if (((char)piVar4[7] == '\0') && (piVar4[10] < param_2)) {
            if ((*piVar4 == 0) ||
               (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar4),
               iVar1 == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(iVar1 + 4);
            }
            FUN_00611440(uVar5);
            iVar1 = FUN_00627400(0xc);
            local_4 = 0;
            if (iVar1 != 0) {
              FUN_006225d0(piVar4);
            }
            local_4 = 0xffffffff;
          }
          iVar2 = iVar2 + 1;
          iVar1 = FUN_005dbef0();
        } while (iVar2 < iVar1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

