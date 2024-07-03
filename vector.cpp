<!DOCTYPE HTML>

<html>
	<head>
		<title>Vector Maps</title>
		<meta charset="utf-8" />
		<meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=no" />
		<link rel="stylesheet" href="assets/css/main.css" />
		<noscript><link rel="stylesheet" href="assets/css/noscript.css" /></noscript>
	</head>
	<body class="is-preload">
		<!-- Wrapper -->
			<div id="wrapper">

				<!-- Header -->
					<header id="header">
						<div class="inner">
								</a>

							<!-- Nav -->
								<nav>
									<ul>
										<li><a href="#menu">Menu</a></li>
									</ul>
								</nav>

						</div>
					</header>

				<!-- Menu -->
					<nav id="menu">
						<h2>Menu</h2>
						<ul>
							<li><a href="index.html">Home</a></li>
							<li><a href="choropleth.html">Choropleth Maps</a></li>						
							<li><a href="vector.html">Vector Map</a></li>
							<li><a href="lc.html">Land Cover Classification Map</a></li>
							<li><a href="carbon.html">Carbon Calculations</a></li>
							<li><a href="rem.html">Relative Elevation Model</a></li>
						</ul>
					</nav>

				<!-- Main -->
					<div id="main">
						<div class="inner">
							<h1>Vector Maps</h1>
							<h2>Description of map</h2>
							<p>The aim of creating a vector map using the tree data from Utrecht is to visually represent and analyze the spatial distribution of trees in the area. By mapping out the locations of different tree types, researchers and planners can identify patterns, trends, and concentrations of specific tree species. This information can be valuable for various purposes such as urban planning, environmental management, biodiversity conservation, and assessing the impact of trees on the local ecosystem. Additionally, the vector map can help stakeholders make informed decisions regarding tree planting, maintenance, and preservation efforts in Utrecht.</p>
							<span class="image main"><img src="images/pic13.jpg" alt="" /></span>
								<h2>How was it made?</h2>
								<p>To create a vector map in ArcGIS Pro, I started a new project named "Trees_Vector_Data." I added tree data from Utrecht using ArcGIS Online, then filtered and created a new layer to display specific types of trees. After setting the project's units of measure and customizing symbology for clarity, I conducted spatial analysis to identify trends in tree distribution. This involved creating maps like Choropleth and Kernel Density maps to visualize tree densities and patterns across the area, providing insights useful for urban planning and environmental management decisions.</p>
								

								<h2>Skills Acquired</h2>
								<p> I have gained proficiency in data sourcing, cleaning, and preprocessing to ensure accuracy and relevance for mapping. Using QGIS, I developed skills in spatial data management, including importing shapefiles, defining geographic boundaries, and applying symbology techniques to represent data effectively. Through Esri Online, I learned to utilize web-based mapping tools to create interactive and dynamic choropleth maps, enhancing my ability to communicate spatial insights to diverse audiences. Additionally, I acquired knowledge in map design principles, such as color selection and classification methods, which are crucial for producing clear and informative visualizations.</p>
								<h2>Choropleth Web App on ArcGIS Online </h2>
								<p>To create an interactive map, I exported the map from QGIS into ArcGIS Online. I then altered the symbology and classification for the best visual representation. I used the natural classification. Then, I exported it into a webpage and used a slider option.</p>
								<p> SDG 3.2.1 aims to end preventable deaths of newborns and children under 5 years of age. This goal is focused on improving health outcomes, particularly for young children.By comparing maps of these two indicators, you can see how improvements in urban living conditions (SDG 11.1.1) might correlate with better health outcomes for children (SDG 3.2.1). Improved housing and services can lead to better sanitation, reduced exposure to environmental hazards, and overall better health conditions for families, directly impacting child mortality rates.</p>

							
						<iframe src="https://uni-utrecht.maps.arcgis.com/apps/Compare/index.html?appid=70098f9e078a4423a812d3c20dc28241" width="100%" height="800px" frameborder="0" style="border:0" allowfullscreen>iFrames are not supported on this page.</iframe>
						
						
						</div>
					</div>

				<!-- Footer -->
					<footer id="footer">
						<div class="inner">
							
							<section>
								<h2>Follow</h2>
								<ul class="icons">
									<li><a href="#" class="icon solid style2 fa-phone"><span class="label">Phone</span></a></li>
									<li><a href="#" class="icon solid style2 fa-envelope"><span class="label">Email</span></a></li>
								</ul>
							</section>
						
							</ul>
						</div>
					</footer>

			</div>

		<!-- Scripts -->
			<script src="assets/js/jquery.min.js"></script>
			<script src="assets/js/browser.min.js"></script>
			<script src="assets/js/breakpoints.min.js"></script>
			<script src="assets/js/util.js"></script>
			<script src="assets/js/main.js"></script>

	</body>
</html>