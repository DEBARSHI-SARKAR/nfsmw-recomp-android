/* speed.exe 004af640 FUN_004af640; analysis pseudocode, not buildable source.
 * calls 00831a8a FUN_00831a8a
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 */

void __thiscall FUN_004af640(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b30b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 4 + param_3 * 4) == 0) {
    uVar4 = 1;
    if ((param_2 != 2) && (param_2 == 3)) {
      uVar4 = 2;
    }
    PTR_s_CSISSOUND_008ee560 = s_SND__FE_Hydraulics_008969f0;
    ExceptionList = &local_c;
    iVar2 = FUN_00831667(0x1c);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      puVar1 = (undefined4 *)(iVar2 + 4);
      *puVar1 = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      else if (2 < uVar4) {
        uVar4 = 2;
      }
      *(uint *)(iVar2 + 0x10) = uVar4;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      iVar3 = FUN_00831a8a(&DAT_0091484c,puVar1,iVar2);
      if (iVar3 < 0) {
        FUN_0083198b(&PTR_s_FX_Hydraulic_008f0300);
        FUN_00831a8a(&DAT_0091484c,puVar1,iVar2);
      }
    }
    *(int *)(param_1 + 4 + param_3 * 4) = iVar2;
  }
  ExceptionList = local_c;
  return;
}

