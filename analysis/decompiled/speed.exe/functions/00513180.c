/* speed.exe 00513180 FUN_00513180; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 0056c6e0 FUN_0056c6e0
 */

void __fastcall FUN_00513180(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      FUN_0056c6e0(*(int *)(param_1 + 0x19c));
      *(undefined4 *)(param_1 + 0x19c) = 0;
    }
    uVar1 = FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,
                         *(undefined4 *)(param_1 + 0x1b4),*(undefined4 *)(param_1 + 0x1b8),
                         *(undefined4 *)(param_1 + 0x1bc),*(undefined4 *)(param_1 + 0x1c0));
    *(undefined4 *)(param_1 + 0x19c) = uVar1;
  }
  return;
}

