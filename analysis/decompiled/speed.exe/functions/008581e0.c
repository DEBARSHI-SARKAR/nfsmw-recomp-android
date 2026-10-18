/* speed.exe 008581e0 FUN_008581e0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000035 SetCommMask
 * calls EXTERNAL:00000033 PurgeComm
 * calls EXTERNAL:0000001f Sleep
 * calls EXTERNAL:00000006 CloseHandle
 */

undefined4 FUN_008581e0(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != 1) {
    if (*(int *)(param_1 + 0xd0) == 4) {
      *(undefined4 *)(param_1 + 0xd0) = 6;
      do {
        Sleep(0);
      } while (*(int *)(param_1 + 0xd0) == 6);
    }
    *(undefined4 *)(param_1 + 0xd0) = 8;
    do {
      Sleep(0);
    } while (*(int *)(param_1 + 0xd0) != 1);
    if (*(HANDLE *)(param_1 + 0x80) != (HANDLE)0xffffffff) {
      SetCommMask(*(HANDLE *)(param_1 + 0x80),2);
      PurgeComm(*(HANDLE *)(param_1 + 0x80),0xf);
      CloseHandle(*(HANDLE *)(param_1 + 0x80));
      *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    }
  }
  return 0;
}

