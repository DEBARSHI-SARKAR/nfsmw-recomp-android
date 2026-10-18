/* speed.exe 005134b0 FUN_005134b0; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 0056c6e0 FUN_0056c6e0
 */

void __fastcall FUN_005134b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x11ac) == '\x01') {
    *(undefined1 *)(param_1 + 0x11ac) = 0;
    if (*(int *)(param_1 + 0x1168) != 0) {
      FUN_0056c6e0(*(int *)(param_1 + 0x1168));
      *(undefined4 *)(param_1 + 0x1168) = 0;
    }
    uVar1 = FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,
                         *(undefined4 *)(param_1 + 0x11b0),*(undefined4 *)(param_1 + 0x11b4),
                         *(undefined4 *)(param_1 + 0x11b8),*(undefined4 *)(param_1 + 0x11bc));
    *(undefined4 *)(param_1 + 0x1168) = uVar1;
  }
  return;
}

