#include "../overlay.h"
#include "kiero.h"

extern ImVec2 window_size;
extern struct overlay_params params;
extern struct swapchain_stats sw_stats;
extern kiero::RenderType::Enum dx_version;

extern void init_d3d_shared(void);
extern void d3d_run(void);
extern uint32_t get_device_id_dxgi(void);
