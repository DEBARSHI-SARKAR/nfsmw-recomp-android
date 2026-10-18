/* speed.exe 007d2988 FUN_007d2988; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls 007d2ae0 _CrtMessageWindow
 * calls EXTERNAL:0000004c OutputDebugStringA
 * calls 007df150 __itoa
 * calls EXTERNAL:00000072 WriteFile
 * calls 007d0cd0 _strlen
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_007d2988(void)

{
  int iVar1;
  size_t nNumberOfBytesToWrite;
  char *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  
  if (DAT_009c5308 != (code *)0x0) {
    iVar1 = (*DAT_009c5308)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x1028,unaff_EBP + -0x20);
    if (iVar1 != 0) {
      if (*(int *)(unaff_EBP + 8) == 2) {
        InterlockedDecrement((LONG *)&DAT_00906ab8);
      }
      uVar3 = *(undefined4 *)(unaff_EBP + -0x20);
      goto LAB_007d2ab9;
    }
  }
  if (((*(uint *)(&DAT_00906abc + *(int *)(unaff_EBP + 8) * 4) & 1) != 0) &&
     (*(int *)(&DAT_00906ac8 + *(int *)(unaff_EBP + 8) * 4) != -1)) {
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = (LPDWORD)(unaff_EBP + -0x3034);
    nNumberOfBytesToWrite = _strlen((char *)(unaff_EBP + -0x1028));
    WriteFile(*(HANDLE *)(&DAT_00906ac8 + *(int *)(unaff_EBP + 8) * 4),
              (LPCVOID)(unaff_EBP + -0x1028),nNumberOfBytesToWrite,lpNumberOfBytesWritten,
              lpOverlapped);
  }
  if ((*(uint *)(&DAT_00906abc + *(int *)(unaff_EBP + 8) * 4) & 2) != 0) {
    OutputDebugStringA((LPCSTR)(unaff_EBP + -0x1028));
  }
  if ((*(uint *)(&DAT_00906abc + *(int *)(unaff_EBP + 8) * 4) & 4) == 0) {
    if (*(int *)(unaff_EBP + 8) == 2) {
      InterlockedDecrement((LONG *)&DAT_00906ab8);
    }
    uVar3 = 0;
  }
  else {
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      *(undefined4 *)(unaff_EBP + -0x3054) = 0;
    }
    else {
      pcVar2 = __itoa(*(int *)(unaff_EBP + 0x10),(char *)(unaff_EBP + -0x3048),10);
      *(char **)(unaff_EBP + -0x3054) = pcVar2;
    }
    uVar3 = _CrtMessageWindow(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                              *(undefined4 *)(unaff_EBP + -0x3054),*(undefined4 *)(unaff_EBP + 0x14)
                              ,unaff_EBP + -0x3028);
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    if (*(int *)(unaff_EBP + 8) == 2) {
      InterlockedDecrement((LONG *)&DAT_00906ab8);
    }
    uVar3 = *(undefined4 *)(unaff_EBP + -0x20);
  }
LAB_007d2ab9:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar3;
}

