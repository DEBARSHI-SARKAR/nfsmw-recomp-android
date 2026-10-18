/* speed.exe 004af750 FUN_004af750; analysis pseudocode, not buildable source.
 * calls 00831a8a FUN_00831a8a
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 */

void __thiscall FUN_004af750(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b32b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x14 + param_2 * 4) == 0) {
    PTR_s_CSISSOUND_008ee560 = s_SND__FE_Bounce_00896a04;
    ExceptionList = &local_c;
    iVar2 = FUN_00831667(0x14);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      puVar1 = (undefined4 *)(iVar2 + 4);
      *puVar1 = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      iVar3 = FUN_00831a8a(&DAT_0091483c,puVar1,iVar2);
      if (iVar3 < 0) {
        FUN_0083198b(&PTR_s_FX_Hydr_Bounce_008f0310);
        FUN_00831a8a(&DAT_0091483c,puVar1,iVar2);
      }
    }
    *(int *)(param_1 + 0x14 + param_2 * 4) = iVar2;
  }
  ExceptionList = local_c;
  return;
}

