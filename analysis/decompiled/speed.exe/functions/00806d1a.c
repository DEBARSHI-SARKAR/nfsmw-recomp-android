/* speed.exe 00806d1a FUN_00806d1a; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000102 SelectObject
 * calls EXTERNAL:000000f8 ExtTextOutA
 * calls EXTERNAL:000000fc DeleteDC
 * calls EXTERNAL:000000fd SetBkMode
 * calls EXTERNAL:000000ff SetTextColor
 * calls EXTERNAL:00000103 CreateCompatibleDC
 * calls EXTERNAL:000000fa GetPixel
 * calls EXTERNAL:00000101 CreateBitmap
 * calls EXTERNAL:000000fe SetBkColor
 * calls EXTERNAL:000000fb DeleteObject
 * calls 007df530 __vsnprintf
 * calls EXTERNAL:000000f9 BitBlt
 * calls EXTERNAL:00000100 CreateFontA
 */

int FUN_00806d1a(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  HDC hdc;
  BOOL BVar3;
  int iVar4;
  COLORREF CVar5;
  int iVar6;
  undefined4 *puVar7;
  char local_130;
  undefined4 local_12f;
  int local_30;
  HGDIOBJ local_2c;
  HBITMAP local_28;
  HGDIOBJ local_24;
  int local_20;
  int local_1c;
  HFONT local_18;
  RECT local_14;
  
  local_30 = *(int *)(param_1 + 0x1b8);
  iVar4 = *(int *)(param_1 + 0x25c);
  local_130 = '\0';
  puVar7 = &local_12f;
  for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  *(undefined1 *)((int)puVar7 + 2) = 0;
  local_20 = 0;
  local_1c = iVar4 + param_2;
  __vsnprintf(&local_130,0x100,param_3,&stack0x00000010);
  pcVar2 = &local_130;
  local_14.left = 0;
  local_14.top = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_14.right = ((int)pcVar2 - (int)&local_12f) * 8;
  local_14.bottom = 8;
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc != (HDC)0x0) {
    local_28 = CreateBitmap(local_14.right,local_14.bottom,1,1,(void *)0x0);
    if (local_28 != (HBITMAP)0x0) {
      local_2c = SelectObject(hdc,local_28);
      if (local_2c != (HGDIOBJ)0x0) {
        local_18 = CreateFontA(8,0,0,0,0,0,0,0,0,0,0,0,0x22,"");
        if (local_18 != (HFONT)0x0) {
          local_24 = SelectObject(hdc,local_28);
          if (local_24 != (HGDIOBJ)0x0) {
            SelectObject(hdc,local_18);
            SetTextColor(hdc,1);
            SetBkColor(hdc,0);
            SetBkMode(hdc,1);
            BVar3 = BitBlt(hdc,local_14.left,local_14.top,local_14.right,local_14.bottom,hdc,
                           local_14.left,local_14.top,0x42);
            if (BVar3 != 0) {
              pcVar2 = &local_130;
              do {
                cVar1 = *pcVar2;
                pcVar2 = pcVar2 + 1;
              } while (cVar1 != '\0');
              BVar3 = ExtTextOutA(hdc,0,0,4,&local_14,&local_130,(int)pcVar2 - (int)&local_12f,
                                  (INT *)0x0);
              if (BVar3 != 0) {
                param_2 = local_14.top;
                iVar4 = local_14.bottom;
                if (local_14.top < local_14.bottom) {
                  do {
                    param_1 = local_14.left;
                    if (local_14.left < local_14.right) {
                      do {
                        CVar5 = GetPixel(hdc,param_1,(iVar4 - param_2) + -1);
                        if (CVar5 != 0) {
                          *(undefined1 *)(param_1 + local_1c) = 0xff;
                        }
                        param_1 = param_1 + 1;
                        iVar4 = local_14.bottom;
                      } while (param_1 < local_14.right);
                    }
                    local_1c = local_1c + local_30;
                    param_2 = param_2 + 1;
                  } while (param_2 < iVar4);
                }
                pcVar2 = &local_130;
                do {
                  cVar1 = *pcVar2;
                  pcVar2 = pcVar2 + 1;
                } while (cVar1 != '\0');
                local_20 = (int)pcVar2 - (int)&local_12f;
              }
            }
          }
        }
        SelectObject(hdc,local_2c);
      }
      DeleteObject(local_28);
    }
  }
  if (local_18 != (HFONT)0x0) {
    if (local_24 != (HGDIOBJ)0x0) {
      SelectObject(hdc,local_24);
    }
    DeleteObject(local_18);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  return local_20;
}

