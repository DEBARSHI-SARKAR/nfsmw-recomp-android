/* speed.exe 006c21a0 FUN_006c21a0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000c5 SendInput
 * calls EXTERNAL:000000ba ShowCursor
 * calls EXTERNAL:000000bc TranslateMessage
 * calls EXTERNAL:000000bb GetMessageA
 * calls EXTERNAL:000000b9 PeekMessageA
 * calls EXTERNAL:000000bd DispatchMessageA
 */

WPARAM FUN_006c21a0(void)

{
  int iVar1;
  tagMSG local_38;
  tagINPUT local_1c;
  
  PeekMessageA(&local_38,(HWND)0x0,0,0,0);
  if ((DAT_00982c40 != '\0') && (DAT_00982bec != 0)) {
    local_1c.type = 0;
    local_1c.field1_0x4.mi.dx = 0;
    local_1c.field1_0x4.mi.dy = 0;
    local_1c.field1_0x4.mi.mouseData = 0;
    local_1c.field1_0x4.mi.dwFlags = 1;
    local_1c.field1_0x4.mi.time = 0;
    local_1c.field1_0x4.mi.dwExtraInfo = 0;
    SendInput(1,&local_1c,0x1c);
  }
  if (local_38.message == 0x12) {
    if (DAT_009257ec == 0) {
      DAT_009257ec = 1;
    }
    ShowCursor(1);
    return local_38.wParam;
  }
  if ((((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
      ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) && (DAT_00982bec == 0)) {
    iVar1 = GetMessageA(&local_38,(HWND)0x0,0,0);
  }
  else {
    iVar1 = PeekMessageA(&local_38,(HWND)0x0,0,0,1);
  }
  if (iVar1 != 0) {
    TranslateMessage(&local_38);
    DispatchMessageA(&local_38);
  }
  return local_38.wParam;
}

