/* speed.exe 00793ae0 FUN_00793ae0; analysis pseudocode, not buildable source.
 * calls 0078e7d0 FUN_0078e7d0
 * calls 00460c70 FUN_00460c70
 * calls 0083b8a0 FUN_0083b8a0
 */

undefined4 __thiscall FUN_00793ae0(undefined1 *param_1,int param_2)

{
  undefined4 extraout_EDX;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  FUN_0078e7d0();
  FUN_0078e7d0();
  if (*(char *)(param_2 + 8) == '\0') {
    return 0xffffffff;
  }
  FUN_00460c70(extraout_EDX,param_2 + 8);
  FUN_0083b8a0(param_2 + 0x28,param_1 + 0x10,0xb0,&DAT_0089b350);
  return 0;
}

