rs2::pipeline pipe;
rs2::config cfg;
rs2::context ctx;
auto device = ctx.query_devices().front();
auto depth_sensor = device.first<rs2::depth_sensor>();

// Set to slave mode
if (depth_sensor.supports(RS2_OPTION_INTER_CAM_SYNC_MODE))
{
    depth_sensor.set_option(RS2_OPTION_INTER_CAM_SYNC_MODE, 1);
}

cfg.enable_stream(RS2_STREAM_DEPTH); // Enabling Deep Streaming
pipe.start(cfg); 