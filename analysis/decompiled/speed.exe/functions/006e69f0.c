/* speed.exe 006e69f0 FUN_006e69f0; analysis pseudocode, not buildable source.
 * calls 006e63f0 FUN_006e63f0
 * calls 006e6150 FUN_006e6150
 * calls 006cb190 FUN_006cb190
 * calls 006e62a0 FUN_006e62a0
 * calls EXTERNAL:0000000b GetModuleHandleA
 * calls EXTERNAL:000000c6 LoadIconA
 * calls EXTERNAL:000000d4 ShowWindow
 * calls 006bf3e0 FUN_006bf3e0
 * calls 006e6230 FUN_006e6230
 * calls 007e7d52 Direct3DCreate9
 * calls 006e6460 FUN_006e6460
 * calls 006dd380 FUN_006dd380
 * calls 004662e0 FUN_004662e0
 * calls 006bfab0 FUN_006bfab0
 * calls EXTERNAL:000000ae SetWindowLongA
 * calls 006df9c0 FUN_006df9c0
 * calls 007cbbd0 __controlfp
 * calls EXTERNAL:000000d0 UpdateWindow
 * calls 006c0e80 FUN_006c0e80
 * calls 006d7500 FUN_006d7500
 * calls EXTERNAL:000000d1 SetCursor
 * calls EXTERNAL:000000ce AdjustWindowRect
 * calls 006c27d0 FUN_006c27d0
 * calls 006e61c0 FUN_006e61c0
 * calls 006dc510 FUN_006dc510
 * calls 006c1780 FUN_006c1780
 * calls EXTERNAL:000000cf CreateWindowExA
 * calls 006d6000 FUN_006d6000
 * calls EXTERNAL:000000c8 RegisterClassExA
 * calls 006bfbd0 FUN_006bfbd0
 * calls 006e60e0 FUN_006e60e0
 * calls 006e42b0 FUN_006e42b0
 * calls 006e6070 FUN_006e6070
 * calls EXTERNAL:000000ba ShowCursor
 * calls EXTERNAL:000000c9 GetWindowRect
 * calls EXTERNAL:000000ca GetClientRect
 * calls EXTERNAL:000000d2 SetFocus
 * calls 006c1c00 FUN_006c1c00
 * calls EXTERNAL:000000d3 SetForegroundWindow
 * calls 006e6310 FUN_006e6310
 * calls 006c1510 FUN_006c1510
 * calls 006c00d0 FUN_006c00d0
 * calls 007c4b80 FUN_007c4b80
 * calls EXTERNAL:000000c7 LoadCursorA
 * calls 006bd7c0 FUN_006bd7c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006e69f0(void)

{
  short sVar1;
  undefined4 uVar2;
  HMODULE hInstance;
  HICON pHVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  int unaff_EBX;
  char *lpIconName;
  BOOL bMenu;
  int aiStack_58 [2];
  undefined *local_50;
  undefined **local_4c;
  undefined **ppuStack_48;
  tagRECT tStack_44;
  WNDCLASSEXA WStack_34;
  
  if (DAT_00982c34 != 0) {
    DAT_00901820 = 1;
  }
  DAT_00903160 = 1;
  local_50 = &DAT_008f9280;
  local_4c = &PTR_DAT_00905e9c;
  uVar2 = FUN_006e6230(&local_50,&local_50);
  FUN_006e61c0(0x87fa2bec,uVar2);
  DAT_00982bd8 = Direct3DCreate9(0x20);
  uVar2 = FUN_006e6230(0x2b,0x2b);
  FUN_006e61c0(0xa4bb2ee0,uVar2);
  FUN_006c1510();
  if (DAT_00901820 == 0) {
    FUN_006c1c00();
  }
  __controlfp(3,0x8001f);
  _DAT_00982b7c = FUN_004662e0(4,0x400,"g_textureHeaderPool",0);
  *(uint *)(_DAT_00982b7c + 0x14) = *(uint *)(_DAT_00982b7c + 0x14) & 0xfffffffd;
  _DAT_00982b80 = FUN_004662e0(4,0x400,"g_vertexBufferHeaderPool",0);
  lpIconName = "IDI_ICON1";
  *(uint *)(_DAT_00982b80 + 0x14) = *(uint *)(_DAT_00982b80 + 0x14) & 0xfffffffd;
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  pHVar3 = LoadIconA(hInstance,lpIconName);
  WStack_34.cbSize = 0x30;
  WStack_34.style = 0x40;
  WStack_34.lpfnWndProc = (WNDPROC)&LAB_006db6c0;
  WStack_34.cbClsExtra = 0;
  WStack_34.cbWndExtra = 0;
  WStack_34.hInstance = GetModuleHandleA((LPCSTR)0x0);
  WStack_34.hIcon = pHVar3;
  WStack_34.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  WStack_34.hbrBackground = (HBRUSH)0x0;
  WStack_34.lpszMenuName = (LPCSTR)0x0;
  WStack_34.lpszClassName = "GameFrame";
  WStack_34.hIconSm = (HICON)0x0;
  RegisterClassExA(&WStack_34);
  DAT_008f8ff0 = 0x15;
  if (DAT_00901820 != 0) {
    FUN_006dd380(&DAT_0093d470);
    DAT_00982c00 = FUN_007c4b80();
    if (3 < DAT_00982c00) {
      DAT_00901808 = 1;
      FUN_006cb190(DAT_0093d898,DAT_0093d89c);
      sVar1 = FUN_007c4b80();
      uVar2 = FUN_006e6150((int)sVar1,(int)sVar1);
      iVar4 = FUN_006e6070(uVar2,0xf4e41267);
      if (iVar4 != 0x75a5125b) {
        DAT_0090181c = 1;
      }
    }
  }
  FUN_006c27d0(&stack0xffffffa4,aiStack_58);
  uVar2 = (&DAT_009829fc)[DAT_0090181c];
  tStack_44.right = unaff_EBX + 100;
  tStack_44.left = 100;
  tStack_44.top = 100;
  tStack_44.bottom = aiStack_58[0] + 100;
  DAT_00982be8 = aiStack_58[0];
  local_4c = (undefined **)&DAT_008f9220;
  ppuStack_48 = &PTR_DAT_008f8aa8;
  DAT_00982be4 = unaff_EBX;
  uVar5 = FUN_006e6310(&local_4c,&local_4c);
  FUN_006e62a0(0x899cc300,uVar5);
  bMenu = 0;
  DVar6 = FUN_006e6460(0x54052d06,0x54052d06);
  AdjustWindowRect(&tStack_44,DVar6,bMenu);
  uVar5 = FUN_006e6310(0xd,0xd);
  FUN_006e62a0(0x8dd6704,uVar5);
  DVar6 = FUN_006e6460(0x54052d06,0x54052d06);
  DAT_00982bf4 = CreateWindowExA(0,"GameFrame",&DAT_008b0050,DVar6,tStack_44.left,tStack_44.top,
                                 tStack_44.right - tStack_44.left,tStack_44.bottom - tStack_44.top,
                                 (HWND)0x0,(HMENU)0x0,WStack_34.hInstance,(LPVOID)0x0);
  UpdateWindow(DAT_00982bf4);
  if (DAT_00982bf0 == 0) {
    SetCursor((HCURSOR)0x0);
    ShowCursor(0);
  }
  SetFocus(DAT_00982bf4);
  SetForegroundWindow(DAT_00982bf4);
  GetWindowRect(DAT_00982bf4,(LPRECT)&DAT_0093daa4);
  GetClientRect(DAT_00982bf4,(LPRECT)&DAT_0093cad0);
  FUN_006bfab0(unaff_EBX,aiStack_58[0],uVar2);
  iVar4 = FUN_006bfbd0();
  if ((iVar4 != 0) && (0 < DAT_00901808)) {
    DAT_00901808 = 0;
    DAT_00901890 = 0;
    DAT_0090181c = 0;
    FUN_006bfab0(unaff_EBX,aiStack_58[0],uVar2);
    FUN_006bfbd0();
  }
  FUN_006e60e0(0x54052d06,0x76470817);
  uVar2 = FUN_006e6310(1,1);
  FUN_006e62a0(0x7514a902,uVar2);
  (**(code **)(*DAT_00982bdc + 0x10))(DAT_00982bdc);
  ShowWindow(DAT_00982bf4,1);
  SetWindowLongA(DAT_00982bf4,-0x10,0x10000000);
  FUN_006bf3e0();
  FUN_006d6000();
  FUN_006df9c0();
  FUN_006c1780();
  FUN_006d7500();
  FUN_006e42b0();
  FUN_006c00d0();
  FUN_006bd7c0();
  (**(code **)(*DAT_00982bdc + 0x10))(DAT_00982bdc);
  FUN_006c0e80(&stack0xffffff9c,&stack0xffffffa0);
  DAT_00982ac0 = FUN_004662e0(0x604,0x20,"eStripSlotPool",0);
  *(uint *)(DAT_00982ac0 + 0x14) = *(uint *)(DAT_00982ac0 + 0x14) & 0xfffffffd;
  FUN_006e63f0(0x6f876682,0x51e6395b);
  uVar2 = FUN_006e6230(4,4);
  FUN_006e61c0(0x50b6b96e,uVar2);
  FUN_006dc510();
  return 0;
}

