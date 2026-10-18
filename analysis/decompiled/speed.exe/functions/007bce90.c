/* speed.exe 007bce90 FUN_007bce90; analysis pseudocode, not buildable source.
 * calls 007b12b0 FUN_007b12b0
 * calls 0059bc40 FUN_0059bc40
 * calls 00591e90 FUN_00591e90
 */

undefined4 * __thiscall FUN_007bce90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008836b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  *param_1 = &PTR_FUN_008b7e84;
  param_1[0x54] = 0;
  local_4 = 0;
  FUN_007b12b0(*param_2);
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)((int)param_1 + 0x129) = 0;
  uVar2 = param_2[2] & 0xffff;
  param_1[0x52] = uVar2;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x53] = (int)*(short *)((int)param_2 + 10);
  if ((uVar2 < 0x601) || (0x606 < uVar2)) {
    iVar1 = FUN_00591e90("GarageMain.fng");
    *(undefined4 *)(iVar1 + 0x88) = param_1[0x52];
  }
  else {
    iVar1 = FUN_00591e90("GarageMain.fng");
    *(undefined4 *)(iVar1 + 0x88) = DAT_00905ed8;
  }
  ExceptionList = local_c;
  return param_1;
}

