/* speed.exe 00614f40 FUN_00614f40; analysis pseudocode, not buildable source.
 * calls 0060b430 FUN_0060b430
 * calls 007c97c0 FUN_007c97c0
 * calls 00613880 FUN_00613880
 * calls 00606b60 FUN_00606b60
 * calls 0060e480 FUN_0060e480
 */

undefined4 FUN_00614f40(int param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*param_2 == '>') {
    if (*(int *)(*(int *)(param_1 + 8) + -8) != 6) {
      FUN_00613880(param_1,"value for `lua_getinfo\' is not a function");
    }
    uVar2 = FUN_0060e480(param_1,param_2 + 1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  }
  else if (*(int *)(param_3 + 0x5c) == 0) {
    FUN_0060b430(param_1);
  }
  else {
    uVar2 = FUN_0060e480(param_1,param_2);
  }
  iVar1 = FUN_007c97c0(param_2,0x66);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 8) < 9) {
      FUN_00606b60(param_1,1);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  }
  return uVar2;
}

