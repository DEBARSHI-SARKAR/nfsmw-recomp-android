/* speed.exe 007c3e10 FUN_007c3e10; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 0056ecf0 FUN_0056ecf0
 * calls 007c3a50 FUN_007c3a50
 * calls 00462830 FUN_00462830
 * calls 007b37a0 FUN_007b37a0
 * calls 007b3a30 FUN_007b3a30
 * calls 0056dbe0 FUN_0056dbe0
 * calls 007bea80 FUN_007bea80
 * calls 00652ad0 _malloc
 * calls 00580cd0 FUN_00580cd0
 */

undefined4 * __thiscall FUN_007c3e10(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883c2a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  puVar1 = param_1 + 0xb;
  *param_1 = &PTR_FUN_008b7f50;
  *puVar1 = puVar1;
  param_1[0xc] = puVar1;
  puVar2 = param_1 + 0xe;
  *puVar2 = puVar2;
  param_1[0xf] = puVar2;
  puVar2 = param_1 + 0x11;
  *puVar2 = puVar2;
  param_1[0x12] = puVar2;
  puVar2 = param_1 + 0x14;
  *puVar2 = puVar2;
  param_1[0x15] = puVar2;
  puVar2 = param_1 + 0x17;
  *puVar2 = puVar2;
  param_1[0x18] = puVar2;
  puVar2 = param_1 + 0x1a;
  *puVar2 = puVar2;
  param_1[0x1b] = puVar2;
  param_1[0x1f] = 1;
  local_4 = 6;
  FUN_0056dbe0(0xb);
  param_2 = 0;
  do {
    piVar3 = (int *)FUN_0056ecf0(param_2);
    if (*piVar3 != -1) {
      piVar4 = _malloc(0xc);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4[2] = *piVar3;
      }
      puVar2 = (undefined4 *)param_1[0xc];
      *puVar2 = piVar4;
      param_1[0xc] = piVar4;
      piVar4[1] = (int)puVar2;
      *piVar4 = (int)puVar1;
    }
    param_2 = param_2 + 1;
  } while (param_2 < 200);
  FUN_00462830(&LAB_007a74b0);
  uVar5 = FUN_00580cd0();
  param_1[0x1d] = uVar5;
  param_1[0xd] = *puVar1;
  FUN_007c3a50();
  FUN_007b37a0();
  FUN_007bea80();
  FUN_007b3a30();
  ExceptionList = local_c;
  return param_1;
}

