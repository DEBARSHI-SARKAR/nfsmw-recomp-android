/* speed.exe 006cbb70 FUN_006cbb70; analysis pseudocode, not buildable source.
 * calls 0065f7a0 FUN_0065f7a0
 * calls 006c2620 FUN_006c2620
 * calls EXTERNAL:000000cd MessageBoxA
 * calls 006c25a0 FUN_006c25a0
 */

undefined4 FUN_006cbb70(void)

{
  char cVar1;
  int iVar2;
  
  do {
    if (DAT_009018bc == 0) {
      cVar1 = FUN_006c25a0(DAT_008f945c);
      if (cVar1 != '\0') goto LAB_006cbb97;
      DAT_009018bc = 1;
    }
    else {
      cVar1 = FUN_006c2620();
      if (cVar1 == '\0') {
        DAT_009018bc = 1;
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
LAB_006cbb97:
        DAT_009018bc = 0;
      }
    }
    if ((DAT_008a9260 != 0) || (cVar1 != '\0')) {
      return 1;
    }
    iVar2 = FUN_0065f7a0("foobar");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = MessageBoxA((HWND)0x0,"Please insert Disc 2","Need For Speed Most Wanted",1);
    if (iVar2 != 1) {
      return 0;
    }
  } while( true );
}

