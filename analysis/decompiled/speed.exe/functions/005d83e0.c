/* speed.exe 005d83e0 FUN_005d83e0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d7360 FUN_005d7360
 * calls 005d54a0 FUN_005d54a0
 * calls 005d6430 FUN_005d6430
 * calls 005d6e40 FUN_005d6e40
 */

void FUN_005d83e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874ab8;
  local_c = ExceptionList;
  if (DAT_0091dd99 == '\0') {
    ExceptionList = &local_c;
    FUN_005d7360(param_1);
    if (0 < param_1) {
      local_10 = param_1;
      do {
        uVar2 = FUN_005d6430();
        iVar1 = DAT_0091ddb4;
        local_4 = 0;
        if ((DAT_0091ddb0 == 0) ||
           ((uint)(DAT_0091ddb8 - DAT_0091ddb0 >> 2) <= (uint)(DAT_0091ddb4 - DAT_0091ddb0 >> 2))) {
          FUN_005d6e40(DAT_0091ddb4,1,uVar2);
        }
        else {
          FUN_005d54a0(DAT_0091ddb4,1,uVar2,&DAT_0091ddac,param_1);
          DAT_0091ddb4 = iVar1 + 4;
        }
        *local_14 = *local_14 + -1;
        local_4 = 0xffffffff;
        if (*local_14 == 0) {
          thunk_FUN_007c7250(local_14);
        }
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    DAT_0091dd99 = '\x01';
  }
  ExceptionList = local_c;
  return;
}

