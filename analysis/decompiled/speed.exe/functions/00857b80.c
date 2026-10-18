/* speed.exe 00857b80 FUN_00857b80; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000035 SetCommMask
 * calls EXTERNAL:00000033 PurgeComm
 * calls EXTERNAL:0000001f Sleep
 * calls 0078af60 thunk_FUN_004655f0
 * calls EXTERNAL:00000006 CloseHandle
 */

void FUN_00857b80(int param_1)

{
  if (*(int *)(param_1 + 0xd0) == 4) {
    *(undefined4 *)(param_1 + 0xd0) = 6;
    do {
      Sleep(0);
    } while (*(int *)(param_1 + 0xd0) == 6);
  }
  *(undefined4 *)(param_1 + 0xd0) = 9;
  do {
    Sleep(0);
  } while (*(int *)(param_1 + 0xd0) != 1);
  if (*(HANDLE *)(param_1 + 0x80) != (HANDLE)0xffffffff) {
    SetCommMask(*(HANDLE *)(param_1 + 0x80),2);
    PurgeComm(*(HANDLE *)(param_1 + 0x80),0xf);
    CloseHandle(*(HANDLE *)(param_1 + 0x80));
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x94));
  CloseHandle(*(HANDLE *)(param_1 + 0xa8));
  CloseHandle(*(HANDLE *)(param_1 + 0xbc));
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0xe8));
  thunk_FUN_004655f0(*(undefined4 *)(param_1 + 0x104));
  thunk_FUN_004655f0(param_1);
  return;
}

