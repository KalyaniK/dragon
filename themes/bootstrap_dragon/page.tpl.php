<?php if (theme_get_setting('scrolltop_display')): ?>
<div id="toTop"><span class="glyphicon glyphicon-chevron-up"></span></div>
<?php endif; ?>

<?php if ($page['pre_header_first'] || $page['pre_header_second'] || $page['pre_header_third']) :?>
<!-- #pre-header -->
<div id="pre-header" class="clearfix">
    <div class="container">

        <!-- #pre-header-inside -->
        <div id="pre-header-inside" class="clearfix">
            <div class="row">
                <div class="col-md-4">
                    <?php if ($page['pre_header_first']):?>
                    <div class="pre-header-area">
                    <?php print render($page['pre_header_first']); ?>
                    </div>
                    <?php endif; ?>
                </div>

                <div class="col-md-4">
                    <?php if ($page['pre_header_second']):?>
                    <div class="pre-header-area">
                    <?php print render($page['pre_header_second']); ?>
                    </div>
                    <?php endif; ?>
                </div>

                <div class="col-md-4">
                    <?php if ($page['pre_header_third']):?>
                    <div class="pre-header-area">
                    <?php print render($page['pre_header_third']); ?>
                    </div>
                    <?php endif; ?>
                </div>
            </div>
        </div>
        <!-- EOF: #pre-header-inside -->

    </div>
    <div class="toggle-control"><a href="javascript:showPreHeader()"><span class="glyphicon glyphicon-plus"></span></a></div>
</div>
<!-- EOF: #pre-header -->
<?php endif; ?>

<?php if ($page['header_top_left'] || $page['header_top_right']) :?>
<!-- #header-top -->
<div id="header-top" class="navbar navbar-default navbar-fixed-top">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <a class="navbar-brand dragon-logo" href="<?php print $front_page; ?>">
        <img alt="Brand"  width="40" height="40" src="<?php print $logo; ?>">
      </a>
      <a  class="navbar-brand"  id="site-name" href="<?php print $front_page; ?>"><?php print t($site_name); ?> </a>
    </div>
    <!-- Collect the nav links, forms, and other content for toggling -->
    <div id="dragon-navbar-collapse">
      <div class="container">
        <?php if ($page['header_top_left']) :?>
        <div class="nav navbar-nav">
          <!-- #header-top-left -->
          <div id="header-top-left" class="clearfix">
              <?php print render($page['header_top_left']); ?>
          </div>
          <!-- EOF:#header-top-left -->
        </div>
        <?php endif; ?>
        <?php if ($page['header_top_right']) :?>
        <div class="nav navbar-nav navbar-right">
            <!-- #header-top-right -->
            <div id="header-top-right" class="clearfix">
                <?php print render($page['header_top_right']); ?>
            </div>
            <!-- EOF:#header-top-right -->
        </div>
        <?php endif; ?>
      </div>
    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->
</div>

<!-- EOF: #header-top -->
<?php endif; ?>

<?php if ($page['banner']) : ?>
<!-- #banner -->
<div id="banner" class="clearfix">
    <div class="container">

        <!-- #banner-inside -->
        <div id="banner-inside" class="clearfix">
            <div class="row">
                <div class="col-md-12">
                <?php print render($page['banner']); ?>
                </div>
            </div>
        </div>
        <!-- EOF: #banner-inside -->

    </div>
</div>
<!-- EOF:#banner -->
<?php endif; ?>

<!-- #page -->
<div id="page" class="clearfix">

    <?php if ($page['highlighted']):?>
    <!-- #top-content -->
    <div id="top-content" class="clearfix">
        <div class="container">

            <!-- #top-content-inside -->
            <div id="top-content-inside" class="clearfix">
                <div class="row">
                    <div class="col-md-12">
                    <?php print render($page['highlighted']); ?>
                    </div>
                </div>
            </div>
            <!-- EOF:#top-content-inside -->

        </div>
    </div>
    <!-- EOF: #top-content -->
    <?php endif; ?>

    <!-- #main-content -->
    <div id="main-content">
        <div class="container">

            <!-- #messages-console -->
            <?php if ($messages):?>
            <div id="messages-console" class="clearfix">
                <div class="row">
                    <div class="col-md-12">
                    <?php print $messages; ?>
                    </div>
                </div>
            </div>
            <?php endif; ?>
            <!-- EOF: #messages-console -->

            <div class="row">

                <?php if ($page['sidebar_first']):?>
                <aside class="<?php print $sidebar_grid_class; ?>">
                    <!--#sidebar-first-->
                    <section id="sidebar-first" class="sidebar clearfix">
                    <?php print render($page['sidebar_first']); ?>
                    </section>
                    <!--EOF:#sidebar-first-->
                </aside>
                <?php endif; ?>


                <section class="<?php print $main_grid_class; ?>">

                    <!-- #main -->
                    <div id="main" class="clearfix">

                        <?php if ($breadcrumb && theme_get_setting('breadcrumb_display')):?>
                        <!-- #breadcrumb -->
                        <!-- Right now disable the breadcrumb -->
                        <div id="breadcrumb" class="clearfix">
                            <!-- #breadcrumb-inside -->
                            <div id="breadcrumb-inside" class="clearfix">
                            <?php //print $breadcrumb; ?>
                            </div>
                            <!-- EOF: #breadcrumb-inside -->
                        </div>
                        <!-- EOF: #breadcrumb -->
                        <?php endif; ?>

                        <?php if ($page['promoted']):?>
                        <!-- #promoted -->
                            <div id="promoted" class="clearfix">
                                <div id="promoted-inside" class="clearfix">
                                <?php print render($page['promoted']); ?>
                                </div>
                            </div>
                        <!-- EOF: #promoted -->
                        <?php endif; ?>

                        <!-- EOF:#content-wrapper -->
                        <div id="content-wrapper">
<div class="title">
                            <?php print render($title_prefix); ?>
                            <?php if ($title):?>
                            <h1 class="page-title"><?php print t($title); ?></h1>
                            
                  <?php if(isset($button_group)): ?>
                      <div class='button-group'>
                          <?php if(isset($button_group)) {print render($button_group);} ?>
                          <?php if(isset($dropdown_tasks)) {print render($dropdown_tasks);} ?>
                      </div>
                  <?php endif; ?>
                  
                            <?php endif; ?>
                            <?php print render($title_suffix); ?>
</div>
                            <?php print render($page['help']); ?>



                            <!-- #action links -->
                            <?php if ($action_links):?>
                                <ul class="action-links">
                                <?php print render($action_links); ?>
                                </ul>
                            <?php endif; ?>
                            <!-- EOF: #action links -->

                            <?php print render($page['content']); ?>
                            <?php print $feed_icons; ?>

                        </div>
                        <!-- EOF:#content-wrapper -->

                    </div>
                    <!-- EOF:#main -->

                </section>

                <?php if ($page['sidebar_second']):?>
                <aside class="<?php print $sidebar_grid_class; ?>">
                    <!--#sidebar-second-->
                    <section id="sidebar-second" class="sidebar clearfix">
                    <?php print render($page['sidebar_second']); ?>
                    </section>
                    <!--EOF:#sidebar-second-->
                </aside>
                <?php endif; ?>

            </div>

        </div>
    </div>
    <!-- EOF:#main-content -->

    <?php if ($page['bottom_content']):?>
    <!-- #bottom-content -->
    <div id="bottom-content" class="clearfix">
        <div class="container">

            <!-- #bottom-content-inside -->
            <div id="bottom-content-inside" class="clearfix">
                <div class="row">
                    <div class="col-md-12">
                    <?php print render($page['bottom_content']); ?>
                    </div>
                </div>
            </div>
            <!-- EOF:#bottom-content-inside -->

        </div>
    </div>
    <!-- EOF: #bottom-content -->
    <?php endif; ?>

    <?php if ($page['dragon_blocks']):?>
    <!-- #bottom-content -->
    <div id="dragon-blocks" class="clearfix">
                    <?php print render($page['dragon_blocks']); ?>
    </div>
    <!-- EOF: #bottom-content -->
    <?php endif; ?>

</div>
<!-- EOF:#page -->

<?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third'] || $page['footer_fourth']):?>
<!-- #footer -->
<footer id="footer" class="clearfix">
    <div class="container">

        <!-- #footer-inside -->
        <div id="footer-inside" class="clearfix">
            <div class="row">
                <div class="col-md-3">
                    <?php if ($page['footer_first']):?>
                    <div class="footer-area">
                    <?php print render($page['footer_first']); ?>
                    </div>
                    <?php endif; ?>
                </div>

                <div class="col-md-3">
                    <?php if ($page['footer_second']):?>
                    <div class="footer-area">
                    <?php print render($page['footer_second']); ?>
                    </div>
                    <?php endif; ?>
                </div>

                <div class="col-md-3">
                    <?php if ($page['footer_third']):?>
                    <div class="footer-area">
                    <?php print render($page['footer_third']); ?>
                    </div>
                    <?php endif; ?>
                </div>

                <div class="col-md-3">
                    <?php if ($page['footer_fourth']):?>
                    <div class="footer-area">
                    <?php print render($page['footer_fourth']); ?>
                    </div>
                    <?php endif; ?>
                </div>
            </div>
        </div>
        <!-- EOF: #footer-inside -->

    </div>
</footer>
<!-- EOF #footer -->
<?php endif; ?>

<footer id="subfooter" class="clearfix">
    <div class="container">

        <!-- #subfooter-inside -->
        <div id="subfooter-inside" class="clearfix">
            <div class="row">
                <div class="col-md-12">
                    <!-- #subfooter-left -->
                    <div class="subfooter-area">
                    
                    <?php if ($page['footer']):?>
                    <?php print render($page['footer']); ?>
                    <?php endif; ?>

                    </div>
                    <!-- EOF: #subfooter-left -->
                </div>
            </div>
        </div>
        <!-- EOF: #subfooter-inside -->

    </div>
</footer>
<!-- EOF:#subfooter -->
