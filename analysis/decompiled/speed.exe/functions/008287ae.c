/* speed.exe 008287ae FUN_008287ae; analysis pseudocode, not buildable source.
 * calls 008283ff FUN_008283ff
 */

undefined4 __thiscall FUN_008287ae(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_2 == (char *)0x0) || (*(int *)(param_1 + 0xd54) != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0xd44) = 0;
    *(int *)(param_1 + 0xd54) = param_4;
    *(undefined4 *)(param_1 + 0xd58) = param_3;
    *(char **)(param_1 + 0xd48) = param_2;
    if (*(int *)(param_1 + 0xd64) == 1) {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *(uint *)(param_1 + 0xd60) = (uint)(cVar1 == -0x12);
    }
    FUN_008283ff(param_2,param_1,*(undefined4 *)(param_1 + 0xd5c));
    uVar2 = 0;
  }
  return uVar2;
}

