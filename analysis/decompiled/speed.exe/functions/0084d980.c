/* speed.exe 0084d980 FUN_0084d980; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000bc TranslateMessage
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls EXTERNAL:000000bb GetMessageA
 * calls EXTERNAL:000000bd DispatchMessageA
 * calls EXTERNAL:000000b9 PeekMessageA
 * calls 008620fe lineInitialize
 */

undefined4 FUN_0084d980(int param_1)

{
  HMODULE hInstance;
  int iVar1;
  code *lpfnCallback;
  LPCSTR lpszAppName;
  LPDWORD lpdwNumDevs;
  tagMSG local_1c;
  
  PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
  lpszAppName = (LPCSTR)0x0;
  lpfnCallback = FUN_0084d590;
  lpdwNumDevs = (LPDWORD)(param_1 + 0x84);
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  lineInitialize((LPHLINEAPP)(param_1 + 0x88),hInstance,lpfnCallback,lpszAppName,lpdwNumDevs);
  if (*(LPDWORD)(param_1 + 0x84) != 0) {
    *(undefined4 *)(param_1 + 0x94) = 2;
    iVar1 = GetMessageA(&local_1c,(HWND)0x0,0,0);
    while (iVar1 != 0) {
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
      iVar1 = GetMessageA(&local_1c,(HWND)0x0,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x94) = 1;
  return 0;
}

