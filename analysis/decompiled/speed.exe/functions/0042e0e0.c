/* speed.exe 0042e0e0 FUN_0042e0e0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 007c5880 ~exception
 */

void __fastcall FUN_0042e0e0(exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00868288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_FUN_008bf29c;
  local_4 = 0;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_005d0370(*(int *)(param_1 + 0x10),*(uint *)(param_1 + 0x24) + 1,
                   &PTR_LAB_004c5452_1_00890f10);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x10] = (exception)0x0;
  local_4 = 0xffffffff;
  exception::~exception(param_1);
  ExceptionList = local_c;
  return;
}

