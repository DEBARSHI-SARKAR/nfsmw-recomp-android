/* speed.exe 005bc310 FUN_005bc310; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 005aef40 FUN_005aef40
 * calls 005b3b20 FUN_005b3b20
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005bc310(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00874205;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a2e00;
  local_4 = 5;
  thunk_FUN_007c7250(param_1[0xe]);
  if (param_1[0x1a] != 0) {
    thunk_FUN_007c7250(param_1[0x1a]);
  }
  pvVar1 = (void *)param_1[0x1c];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x10,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_005ad810);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  if (param_1[0x26] != 0) {
    thunk_FUN_007c7250(param_1[0x26]);
  }
  pvVar1 = (void *)param_1[0x2b];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x10,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&DAT_005b1ab0);
    thunk_FUN_007c7250((int)pvVar1 + -4);
  }
  puVar2 = (undefined4 *)param_1[0x29];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_005aef40(puVar2);
    while (puVar2 != (undefined4 *)0x0) {
      thunk_FUN_007c7250(puVar2[4]);
      (**(code **)*puVar2)(1);
      puVar2 = (undefined4 *)param_1[0x29];
      if (puVar2 != (undefined4 *)0x0) {
        param_1[0x29] = puVar2[1];
        if (puVar2 == (undefined4 *)param_1[0x2a]) {
          param_1[0x2a] = puVar2[2];
        }
        if (puVar2[2] != 0) {
          *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
        }
        if (puVar2[1] != 0) {
          *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
        }
        puVar2[1] = 0xabadcafe;
        puVar2[2] = 0xabadcafe;
        param_1[0x28] = param_1[0x28] + -1;
      }
    }
  }
  if (param_1[0x22] != 0) {
    thunk_FUN_007c7250(param_1[0x22]);
  }
  local_4._0_1_ = 4;
  param_1[0x27] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  thunk_FUN_007c7250(param_1[0x24]);
  local_4._0_1_ = 2;
  param_1[0x1d] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4._0_1_ = 1;
  param_1[0x15] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x11] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  *param_1 = &PTR_FUN_008a2c2c;
  if (param_1[3] != 0) {
    thunk_FUN_007c7250(param_1[3]);
  }
  *param_1 = &PTR_LAB_008a2c14;
  ExceptionList = pvStack_c;
  return;
}

