/* speed.exe 005a2390 FUN_005a2390; analysis pseudocode, not buildable source.
 * calls 005fb990 FUN_005fb990
 * calls 00652ad0 _malloc
 * calls 0059bd30 FUN_0059bd30
 * calls 005e55a0 FUN_005e55a0
 * calls 005edc60 FUN_005edc60
 * calls 00573140 FUN_00573140
 * calls 0057fdc0 FUN_0057fdc0
 * calls 005ee220 FUN_005ee220
 * calls 005fbb60 FUN_005fbb60
 * calls 0058e210 FUN_0058e210
 * calls 005fbe70 FUN_005fbe70
 * calls 005fa9a0 FUN_005fa9a0
 * calls 005dda70 FUN_005dda70
 * calls 0056dc00 FUN_0056dc00
 * calls 005e46d0 FUN_005e46d0
 * calls 00593250 FUN_00593250
 */

void __fastcall FUN_005a2390(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008735e8;
  local_c = ExceptionList;
  if (DAT_0091e000 != 0) {
    ExceptionList = &local_c;
    if (((*(int *)(DAT_0091e000 + 0x1968) != 0) &&
        (ExceptionList = &local_c, cVar3 = FUN_005fbe70(), cVar3 != '\0')) &&
       (cVar3 = FUN_0056dc00(), cVar3 == '\0')) {
      iVar4 = FUN_005fa9a0();
      if ((iVar4 == 0x33fa23a) || (iVar4 == 0x5392e4fd)) {
        uVar9 = 3;
      }
      else {
        uVar9 = 2;
      }
      uVar5 = FUN_005fa9a0();
      fVar11 = (float10)FUN_005edc60(uVar5);
      fVar12 = (float)fVar11;
      fVar11 = (float10)FUN_005fbb60();
      fVar13 = (float)fVar11;
      iVar4 = FUN_005fa9a0();
      if (iVar4 == 0x5392e4fd) {
        uVar9 = 4;
      }
      uVar10 = (uint)(fVar13 <= fVar12);
      pvVar6 = _malloc(0x2c);
      uVar5 = 0;
      local_4 = 0;
      if (pvVar6 != (void *)0x0) {
        uVar5 = FUN_005fb990(fVar12,fVar13,uVar10);
        uVar5 = FUN_0057fdc0(uVar5);
        uVar5 = FUN_0058e210(uVar9,uVar5,fVar12,fVar13,uVar10);
      }
      local_4 = 0xffffffff;
      FUN_0059bd30(uVar5);
      ExceptionList = local_c;
      return;
    }
    uVar1 = *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
    for (piVar7 = (int *)FUN_005e46d0(0,uVar1); piVar7 != (int *)0x0;
        piVar7 = (int *)FUN_005dda70(piVar7,0,uVar1)) {
      iVar4 = *piVar7;
      if ((iVar4 == 0x33fa23a) || (iVar4 == 0x5392e4fd)) {
        local_1c = 3;
      }
      else {
        local_1c = 2;
      }
      if (iVar4 == 0x5392e4fd) {
        local_1c = 4;
      }
      if ((char)piVar7[2] == '\x03') {
        uVar10 = 1;
      }
      else {
        uVar10 = ((char)piVar7[2] != '\x04') - 1 & 2;
      }
      pvVar6 = _malloc(0x2c);
      local_4 = 1;
      if (pvVar6 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        uVar9 = FUN_005e55a0();
        uVar9 = FUN_00573140("BLACKLIST_PURSUIT_MILESTONES_%02d_SHORT",uVar9);
        iVar4 = piVar7[3];
        fVar11 = (float10)FUN_005ee220(iVar4,uVar10);
        iVar4 = FUN_0058e210(local_1c,uVar9,(float)fVar11,iVar4,uVar10);
      }
      local_4 = 0xffffffff;
      if (iVar4 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(iVar4 + 4);
      }
      piVar2 = *(int **)(param_1 + 0x40);
      *piVar2 = (int)piVar8;
      *(int **)(param_1 + 0x40) = piVar8;
      piVar8[1] = (int)piVar2;
      *piVar8 = param_1 + 0x3c;
      if (*(int *)(param_1 + 0x44) == 0) {
        FUN_00593250(iVar4,0);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

