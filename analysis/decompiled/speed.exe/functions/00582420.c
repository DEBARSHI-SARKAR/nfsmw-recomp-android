/* speed.exe 00582420 FUN_00582420; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 00455fd0 FUN_00455fd0
 * calls 00452380 FUN_00452380
 * calls 006269b0 FUN_006269b0
 */

void __thiscall FUN_00582420(int param_1,float param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008721f8;
  local_c = ExceptionList;
  uVar4 = 0;
  uVar3 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00455fd0(0x5d417978,0xeec2271a,0,0);
  FUN_00452380(uVar1,uVar3,uVar4);
  local_4 = 0;
  pfVar2 = (float *)FUN_00454810(0xa27de5ff,0);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)FUN_006269b0(4);
  }
  local_4 = 0xffffffff;
  *(float *)(param_1 + 0xc) = *pfVar2 * *(float *)(param_1 + 0xc) * param_2;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

