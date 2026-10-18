/* speed.exe 007bb3e0 FUN_007bb3e0; analysis pseudocode, not buildable source.
 * calls 0056f7b0 FUN_0056f7b0
 * calls 0059bc40 FUN_0059bc40
 * calls 0056f120 FUN_0056f120
 * calls 00591e90 FUN_00591e90
 * calls 007aff10 FUN_007aff10
 * calls 00575b00 FUN_00575b00
 * calls 007afc90 FUN_007afc90
 */

undefined4 * __thiscall FUN_007bb3e0(undefined4 *param_1,float param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883636;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  *param_1 = &PTR_FUN_008b7e48;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x56] = &PTR_LAB_008b7244;
  param_1[0x57] = 0;
  param_1[0x58] = 0x3f800000;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 5;
  param_1[0x5d] = 0;
  param_1[0x69] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  uVar3 = *(uint *)((int)param_2 + 8) & 0xffff;
  param_1[0x54] = uVar3;
  local_4 = 1;
  param_1[0x55] = (int)*(short *)((int)param_2 + 10);
  if (uVar3 == 0) {
    cVar2 = FUN_00575b00();
    if (cVar2 == '\0') goto LAB_007bb496;
  }
  else {
LAB_007bb496:
    iVar4 = FUN_00591e90("GarageMain.fng");
    *(undefined4 *)(iVar4 + 0x88) = param_1[0x54];
  }
  if (DAT_009b9ec4 != 0) {
    iVar4 = FUN_0056f120(*(undefined1 *)(DAT_009b9ec4 + 0x11));
    if (iVar4 != 0) {
      fVar5 = (float10)FUN_0056f7b0();
      param_2 = (float)fVar5;
      goto LAB_007bb4eb;
    }
  }
  param_2 = -1.0;
LAB_007bb4eb:
  uVar1 = param_1[4];
  fVar5 = (float10)FUN_007afc90();
  FUN_007aff10(uVar1,"HEAT_METER",0x3f800000,0x40a00000,param_2,(float)fVar5);
  ExceptionList = local_c;
  return param_1;
}

